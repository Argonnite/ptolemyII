/* Exception thrown on an attempt to evaluate an expression that can not be
 determined because some variables are unknown.

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
package ptolemy.data.expr;

import ptolemy.kernel.util.KernelRuntimeException;
import ptolemy.kernel.util.Nameable;

//////////////////////////////////////////////////////////////////////////
//// UnknownResultException

/**
 Thrown on an attempt to evaluate an expression that can not be determined
 because some variables are unknown.

 @author Paul Whitaker
 @version $Id: UnknownResultException.java 69602 2014-07-30 14:20:15Z cxh $
 @since Ptolemy II 2.0
 @Pt.ProposedRating Red (pwhitake)
 @Pt.AcceptedRating Red (pwhitake)
 */
@SuppressWarnings("serial")
public class UnknownResultException extends KernelRuntimeException {
    /** Constructs an Exception with a detail message.
     *  @param detail The message.
     */
    public UnknownResultException(String detail) {
        this(null, detail);
    }

    /** Constructs an Exception with a detail message that is only the
     *  name of the argument.
     *  @param obj The object.
     */
    public UnknownResultException(Nameable obj) {
        this(obj, null);
    }

    /** Constructs an Exception with a detail message that includes the
     *  name of the first argument.
     *  @param obj The object.
     *  @param detail The message.
     */
    public UnknownResultException(Nameable obj, String detail) {
        super(obj, detail);
    }
}
