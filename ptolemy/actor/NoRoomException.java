/* A class for indicating that a receiver failed to accept a token.

 Copyright (c) 1997-2014 The Regents of the University of California.
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
package ptolemy.actor;

import ptolemy.kernel.util.KernelRuntimeException;
import ptolemy.kernel.util.Nameable;

//////////////////////////////////////////////////////////////////////////
//// NoRoomException

/**
 This exception is thrown when an attempt is made to put a token
 into a receiver that does not have room to accommodate one.
 To avoid this exception, code should use the hasRoom() method in the
 Receiver interface to determine whether there is room for a token.

 @author Lukito Muliadi
 @version $Id: NoRoomException.java 69602 2014-07-30 14:20:15Z cxh $
 @since Ptolemy II 0.2
 @Pt.ProposedRating Green (lmuliadi)
 @Pt.AcceptedRating Green (bart)
 @see Receiver
 */
@SuppressWarnings("serial")
public class NoRoomException extends KernelRuntimeException {
    /** Construct an exception with the given error message.
     *  @param message The message.
     */
    public NoRoomException(String message) {
        super(message);
    }

    /** Construct an exception originating from the given object,
     *  with the given error message.
     *  @param object The originating object.
     *  @param message The message.
     */
    public NoRoomException(Nameable object, String message) {
        super(object, message);
    }
}
