// Copyright (c) 2015 The Regents of the University of California.
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

/** Return the raw audio data in .wav format for a given input acoustic event.
 * 
 * @accessor audio/SwarmAcousticServiceGetdat
 * @author Long N.T. Le (longle1@illinois.edu)
 * @version $$Id: SwarmAcousticServiceGetdat.js 292 2015-09-01 14:16:50Z eal $$
 * @input {record} search criteria including the name of an acoustic event (see the accompanied demo for details).
 * @output {general} the raw data associated with the input acoustic event, for playback.
 */

var remoteAddr = 'acoustic.ifp.illinois.edu:8956';
var handle = null;

/** Set up the accessor by defining the inputs and outputs.
 */
exports.setup = function() {
    input('input', {
		'type':'JSON'
    });
	output('data', {
        'type':'string'
    });
};

/** Initialize the accessor by attaching an input handler to the input. */
exports.initialize = function() {
    // Invoke the getPrice function each time a 'symbol' input arrives.
    handle = addInputHandler('input', sasGetdat);
};

/** Remove the input handler. */
exports.wrapup = function() {
    // Failing to do this will likely trigger an exception when the model stops running,
    // because the getPrice() function will attempt to send an output after the model
    // has stopped.
    removeInputHandler(handle, 'input');
};

/** Make http request */
var sasGetdat = function(){
	var mInput = get('input');
	var db=mInput.db, col=mInput.col, user=mInput.user, pwd=mInput.pwd, filename=mInput.filename;

	// Construct the query string
	var queryString = 'user='+user+'&passwd='+pwd+'&filename='+filename;

	var data = httpRequest('http://'+remoteAddr+'/gridfs/'+db+'/'+col+'?'+queryString, 'GET', 
									{'keepAlive': 'true', 'trustAll': 'true'}, null, 10000);
	send('data', data);
};
