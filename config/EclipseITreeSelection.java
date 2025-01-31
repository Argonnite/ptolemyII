/* Simple Java Test Program for the Eclipse ITreeSelection class

Copyright (c) 2006 The Regents of the University of California.
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
import org.eclipse.jface.viewers.ITreeSelection;


/** Simple class used by configure to test whether the Eclipse 3.2
    ITreeSelection class is present
    API  is present.
    If this file will not compile because the import statement fails,
    then try updating to Eclipse 3.2
    @author Christopher Brooks
    @version $Id: EclipseITreeSelection.java 44037 2006-10-17 00:22:41Z cxh $
    @since Ptolemy II 6.0
    @Pt.ProposedRating Green (cxh)
    @Pt.AcceptedRating Red
*/
public class EclipseITreeSelection {
    public static void main(String[] args) {
        System.out.print(System.getProperty("java.version"));
    }
}
