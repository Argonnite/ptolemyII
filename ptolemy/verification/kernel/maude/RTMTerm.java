/*
Below is the copyright agreement for the Ptolemy II system.

Copyright (c) 2009-2014 The Regents of the University of California.
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
 */

package ptolemy.verification.kernel.maude;

//////////////////////////////////////////////////////////////////////////
//// RTMTerm

/**
 * A Real-Time Maude term.
 *
 * @author Thomas Huining Feng
 * @version $Id: RTMTerm.java 70398 2014-10-22 23:44:32Z cxh $
 * @since Ptolemy II 8.0
 * @Pt.ProposedRating Red (tfeng)
 * @Pt.AcceptedRating Red (tfeng)
 */
abstract public class RTMTerm {

    protected int indentWidth = 4;

    public static String transId(String name) {
        return "'" + name;
    }

    abstract public String print(int indent, boolean newline);

    protected String front(int indent) {
        StringBuffer a = new StringBuffer("");
        for (int i = 0; i < indent; i++) {
            a.append(" ");
        }
        return a.toString();
    }
}
