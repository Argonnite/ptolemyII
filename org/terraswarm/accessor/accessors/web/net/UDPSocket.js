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

/** UDP socket accessor.
 *  This accessor listens to the UDP port, and outputs whatever arrives as a string.
 *
 *  @accessor net/UDPSocket
 *  @author Hokeun Kim
 *  @version $$Id: UDPSocket.js 292 2015-09-01 14:16:50Z eal $$
 *  @input {int} port The port to use for the socket.
 *  @output {string} received The received string.
 */

// This accessor requires the optional 'udpSocket' module, which may or may
// not be provided by an accessor host. Most hosts will provide this module.
var UDPSocket = require('udpSocket');

// Set up the accessor. In an XML specification, this information would
// be provided in XML syntax.
exports.setup = function() {
    input('port', {
        'value': 8084,
        'type':'int'
    });
    output('received', {
        'type':'string'
    });
};

// Define the functionality.
function onMessage(message) {
    console.log('Received a UDP packet: ' + message);
    send('received', message);
}

var socket = null;

exports.initialize = function() {
    socket = UDPSocket.createSocket();
    socket.on('message', onMessage);
    var port = get('port');
    socket.bind(port);
}

exports.wrapup = function() {
    socket.close();
}
