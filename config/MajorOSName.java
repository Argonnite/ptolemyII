/* Return the major operating system name of the current JVM (Windows, Linux, Solaris)

Copyright (c) 2003-2009 The Regents of the University of California.
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

/** Print the major operating system name of the current JVM.

@author Christopher Hylands
@version $Id: MajorOSName.java 57040 2010-01-27 20:52:32Z cxh $
@since Ptolemy II 3.0
@Pt.ProposedRating Green (cxh)
@Pt.AcceptedRating Red
*/
public class MajorOSName {
    public static void main(String[] args) {
        String arch = System.getProperty("os.name");

        // See http://www.tolstoy.com/samizdat/sysprops.html
        // and http://www.vamphq.com/os.html
        if (arch.startsWith("Windows")) {
            arch = "Windows";
        }

        System.out.print(arch.replace(" ", ""));
    }
}
