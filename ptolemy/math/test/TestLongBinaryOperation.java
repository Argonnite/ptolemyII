/* A operation taking two operands of type long, and producing a value of
 type long.

 Copyright (c) 1998-2014 The Regents of the University of California.
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
package ptolemy.math.test;

import ptolemy.math.LongBinaryOperation;

/** A operation taking two operands of type long, and producing a value of
 type long. This interface attempts to mimic a first-class function of two
 variables.

 @author Christopher Hylands
 @version $Id: TestLongBinaryOperation.java 70398 2014-10-22 23:44:32Z cxh $
 @since Ptolemy II 2.0
 @Pt.ProposedRating Red (ctsay)
 @Pt.AcceptedRating Red (ctsay)
 */
public class TestLongBinaryOperation implements LongBinaryOperation {
    /** Operate on the operands, returning a value of the same
     *  type. Note that the operation need not be commutative.
     */
    @Override
    public long operate(long leftOperand, long rightOperand) {
        return leftOperand - rightOperand;
    }
}
