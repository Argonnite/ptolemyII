/* Interface debug listeners.

 Copyright (c) 1998-2013 The Regents of the University of California.
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
package ptolemy.kernel.util;

///////////////////////////////////////////////////////////////////
//// DebugListener

/**
 Interface for listeners that receive debug messages.

 @author  Edward A. Lee, Elaine Cheong
 @version $Id: DebugListener.java 65763 2013-03-07 01:54:37Z cxh $
 @since Ptolemy II 0.3
 @Pt.ProposedRating Green (eal)
 @Pt.AcceptedRating Green (cxh)
 @see NamedObj

 */
public interface DebugListener {
    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** React to the given event.
     *  @param event The event.
     */
    public void event(DebugEvent event);

    /** React to a debug message.
     *  @param message The debug message.
     */
    public void message(String message);
}
