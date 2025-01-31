/** Interface for attributes that implement tests.

 Copyright (c) 2009-2011 The Regents of the University of California.
 All rights reserved.
 Permission is hereby granted, without written agreement and without
 license or royalty fees, to use, copy, modify, and distribute this
 software and its documentation for any purpose, provided that the above
 copyright notice and the following two paragraphs appear in all copies
 of this software.

 IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
 FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
 THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.

 THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
 PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
 CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 ENHANCEMENTS, OR MODIFICATIONS.

 PT_COPYRIGHT_VERSION_2
 COPYRIGHTENDKEY
 */

package ptolemy.domains.tester.lib;

import ptolemy.kernel.util.IllegalActionException;

/** Interface for attributes that implement tests.
 *  @author Christopher Brooks, Dai Bui, Edward A. Lee, Ben Lickly
 *  @version $Id: Testable.java 61458 2011-07-11 19:54:07Z cxh $
 *  @since Ptolemy II 8.0
 */
public interface Testable {

    /** Run a test and throw an exception if it fails.
     *  @exception IllegalActionException If the test fails.
     */
    public void test() throws IllegalActionException;

    /** Train the test. This method should record the
     *  the correct values for the test.
     *  @exception IllegalActionException If training fails.
     */
    public void train() throws IllegalActionException;
}
