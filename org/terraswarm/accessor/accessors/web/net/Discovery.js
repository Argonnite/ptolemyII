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

/** This accessor discovers devices on the local area network.
 *  It requires the discovery module.  Please see:
 *  https://www.terraswarm.org/accessors/wiki/Version0/Discovery
 * 
 *  @accessor net/Discovery
 *  @author Elizabeth Latronico (beth@berkeley.edu)
 *  @input {string} hostIP The IP address of the host.  Used to discover other
 *   devices on the local area network.
 *  @output devices An object containing IP addresses and (when
 *   available) names and MAC addresses of devices on the local area network.
 *  @parameter {boolean} useNmap True if nmap should be used for discovery, 
 *   false to use ping and arp.  Default is false.
 *  @version $$Id: Discovery.js 292 2015-09-01 14:16:50Z eal $$ 
 */

var discovery = require('discovery');
// Initialize ds here, instead of in setup(), so that the ds object is defined
// when the ds.on() function is encountered
var ds = new discovery.DiscoveryService();  

/** Define inputs and outputs. */
exports.setup = function () {
    
    accessor.input('hostIP', {
        type: 'string',
      });
    
    accessor.output('devices');
    
    accessor.parameter('useNmap', {
        type: 'boolean',
        value: false,
      });
};

var handle;

/** Upon receiving a host IP address, discover devices on the corresponding 
 *  local area network.
 */
exports.initialize = function () {
	handle = addInputHandler('hostIP', function() {
		if (get('useNmap')) {
		    ds.discoverDevices(get('hostIP'), 'nmap');
		} else {
			ds.discoverDevices(get('hostIP'));
		}
	});
};

/** Upon wrapup, stop handling new inputs.  */
exports.wrapup = function () {
    removeInputHandler(handle);
};

/** When discovery is finished, send a list of devices.  */
ds.on('discovered', function(data) {
	if (data == "") {
       send('error', 'Error:  No devices found.  At minimum, the host machine should be found.');
    } else {
   send('devices', data);
    }
});
