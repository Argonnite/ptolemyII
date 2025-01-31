// Copyright (c) 2014-2015 The Regents of the University of California.
// All rights reserved.

// Permission is hereby granted, without written agreement and without
// license or royalty fees, to use, copy, modify, and distribute this
// software and its documentation for any purpose, provided that the above
// copyright notice and the following two paragraphs appear in all copies
// of this software.

// IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
// FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
// ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
// THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.

// THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
// INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
// PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
// CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
// ENHANCEMENTS, OR MODIFICATIONS.

/** Retrieve weather information for a given location using
 *  http://openweathermap.org .
 *  The location input is given as an object with two numeric fields,
 *  "latitude" and "longitude". The default is
 *  `{"latitude": 37.85, "longitude": -122.26}`, which is
 *  the location of Berkeley, California.
 *
 *  This accessor requires a "key" for the API, which you can
 *  obtain for free at http://openweathermap.org/appid .
 *
 *  @accessor services/Weather
 *  @author Edward A. Lee
 *  @version $Id: Weather.js 332 2015-10-16 01:39:26Z eal $
 *  @input location The location, an object with two fields (default is Berkeley).
 *  @output response An object containing current weather data.
 */

/** Set up the accessor by defining the inputs and outputs.
 */
exports.setup = function() {
    extend('net/REST');
    input('location', {'value': {"latitude": 37.85, "longitude": -122.26}});
    output('weather');
    parameter('temperature', {
        'type':'string',
        'options':['Fahrenheit', 'Celsius', 'Kelvin'],
        'value':'Fahrenheit'
    });
    parameter('key', {'type':'string', 'value':'Enter Key Here'});

    // Change default values of the base class inputs.
    // Also, hide base class inputs, except trigger.
    input('options', {'visibility':'expert', 'value':'"http://api.openweathermap.org"'});
    input('command', {'visibility':'expert', 'value':'/data/2.5/weather'});
    input('arguments', {'visibility':'expert', 'value':'{"lat":37.85, "lon":-122.26}'});
    input('body', {'visibility':'expert'});
    input('trigger', {'visibility':'expert'});
    parameter('outputCompleteResponsesOnly', {'visibility':'expert'});
};

exports.initialize = function() {
    // Be sure to call the superclass so that the trigger input handler gets registered.
    this.ssuper.initialize();
    
    var key = getParameter('key');
    if (key == "Enter Key Here") {
        throw "Weather:  You need a key, which you can obtain at http://openweathermap.org/appid.";
    }

    // Handle location information.
    addInputHandler('location', function() {
        var location = get('location');
        if (location
                && typeof location.latitude === 'number'
                && typeof location.longitude === 'number') {
            var reformatted = {
                'lat' : location.latitude,
                'lon' : location.longitude,
                'APPID' : key
            };
            send('arguments', reformatted);
            send('trigger', true);
        } else {
            if (location == null) {
                error('Weather: No location information.');
            } else {
                error('Weather: Malformed location: ' + location
                        + '\nExpecting {"latitude":number, "longitude":number}');
            }
            send('weather', null);
        }
    });
};

/** Filter the response, extracting the weather information and
 *  outputting it on the weather output. The full response is produced
 *  on the 'response' output.
 */
exports.filterResponse = function(response) {
    if (response) {
        try {
            // NOTE: All of the following should be replaced with a generic
            // schema transformation utility.
            var parsed = JSON.parse(response);
            var weather = {};
            // Look for a description field.
            if (parsed.weather
                    && Array.isArray(parsed.weather)
                    && parsed.weather[0]
                    && parsed.weather[0].description) {
                weather.description = parsed.weather[0].description;
            }
            if (parsed.main) {
                if (parsed.main.temp) {
                    weather.temperature = convertTemperature(parsed.main.temp);
                }
                if (parsed.main.pressure) {
                    weather['pressure (hPa)'] = parsed.main.pressure;
                }
                if (parsed.main.humidity) {
                    weather['humidity (percent)'] = parsed.main.humidity;
                }
                if (parsed.main.temp_min) {
                    weather['minimum temperature'] = convertTemperature(parsed.main.temp_min);
                }
                if (parsed.main.temp_max) {
                    weather['maximum temperature'] = convertTemperature(parsed.main.temp_max);
                }
                if (parsed.main.wind) {
                    if (parsed.main.wind.speed) {
                        weather['wind speed (meters/second)'] = parsed.main.wind.speed;
                    }
                    if (parsed.main.wind.deg) {
                        var deg = parsed.main.wind.deg;
                        var directions = [
                            "North",
                            "North Northeast",
                            "Northeast",
                            "East Northeast",
                            "East",
                            "East Southeast",
                            "Southeast",
                            "South Southeast",
                            "South",
                            "South Southwest",
                            "Southwest",
                            "West Southwest",
                            "West",
                            "West Northwest",
                            "Northwest",
                            "North Northwest"
                        ];
                        var index = Math.floor(((deg + 11.25) % 360)/22.5);
                        weather['wind direction'] = directions[index];
                    }
                }
            }
            if (parsed.name) {
                weather['place name'] = parsed.name;
            }
            send('weather', weather);
        } catch (err) {
            error('Weather: Unable to parse response: ' + err.message);
            send('weather', null);
        }
    }
    return response;
};

/** Convert the temperature in kelvins to the units specified in the
 *  temperature parameter. Also, round the result to a precision of
 *  0.01 degrees.
 *  @param kelvin The temperature in degrees Kelvin.
 *  @return The temperature in the desired units.
 */
function convertTemperature(kelvin) {
    var units = getParameter('temperature');
    var result = kelvin;
    if (units == 'Fahrenheit') {
        result = (kelvin - 273.15) * 1.8 + 32.00;
    } else if (units == 'Celsius') {
        result = kelvin - 273.15;
    }
    return (Math.round(result * 100)/100);
}

