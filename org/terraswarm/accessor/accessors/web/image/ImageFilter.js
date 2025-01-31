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

/**
This accessor filters images provided at the input to produce modified images
on the output. This accessor requires an 'imageFilters' module implemented on
the accessor host. The filters that are available will depend on the particular
host implementation of this module and will be provided as select alternatives for the
'filter' parameter. The options that each filter can accept will also depend on the
module implementation on the host.  The filters that are implemented by the Ptolemy II
host and their options are documented in the
[imageFilters module](https://chess.eecs.berkeley.edu/ptexternal/src/ptII/doc/codeDoc/js/module-imageFilters.html)
Demos for these filters can be found in the Ptolemy II tree at
org/terraswarm/accessor/demo/ImageFilters.

@accessor image/ImageFilter
@parameter {string} filter The filter to apply.
@input input The image to filter.
@input {JSON} options The options controlling the filter.
@output output The filtered image.
@author Edward A. Lee
@version $$Id: ImageFilter.js 292 2015-09-01 14:16:50Z eal $$
 */

var imageFilters = require('imageFilters');

exports.setup = function() {
    input('input');
    output('output');
    input('options', {'value':'', 'type':'JSON'});
    input('filter', {'type':'string', 'value':'Threshold', 'options':imageFilters.filters()});
}

exports.initialize = function() {
    handle = addInputHandler('input', function() {
        var options = get('options');
        var image = get('input');
        var result = imageFilters.filter(image, getParameter('filter'), options);
        send('output', result);
    });
}

exports.wrapup = function() {
    if (handle) {
        removeInputHandler(handle);
    }
}
