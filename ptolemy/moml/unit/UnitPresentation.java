/* Interface that specifies the way Units, etc are presented.

 Copyright (c) 2003-2014 The Regents of the University of California.
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

 PT_COPYRIGHT_VERSION_3
 COPYRIGHTENDKEY
 @Pt.ProposedRating Red (rowland)
 @Pt.AcceptedRating Red (rowland)
 */
package ptolemy.moml.unit;

//////////////////////////////////////////////////////////////////////////
//// UnitPresentation

/** The methods necessary to present Units, UnitConstraints, UnitExprs, etc. so
 that developers, and humans can understand the results generated by the
 system.
 @author Rowland R Johnson
 @version $Id: UnitPresentation.java 70398 2014-10-22 23:44:32Z cxh $
 @since Ptolemy II 8.0
 @Pt.ProposedRating Red (cxh)
 @Pt.AcceptedRating Red (cxh)
 */
public interface UnitPresentation {
    /** This method generates the descriptive form.
     * In addition to the internal form used by the system Units,
     * UnitConstraints, UnitExprs, etc. have a descriptive form that is used by
     * humans. This method generates that form so that humans can
     * easily understand the results generated by the system. For example, an
     * internal representation of a Unit could be 4.1868E7*&lt;2, 1, 1, 0, 0&gt;
     * and its descriptive form would be "calorie".
     * <p>
     * The descriptive form is invariant across Unit Systems. That is, calorie
     * is calorie regardless of the Unit System. But, the internal form may be
     * 4.1868E7*&lt;2, 1, 1, 0, 0&gt; in one Unit System, and
     * 1.0*&lt;2, 1, 1, 0, 0&gt; in another. Therefore the descriptive form is
     * used as the external representation. This makes it
     * possible to save a model under one Unit System, and then load it under a
     * different Unit System.
     * @return The descriptive form.
     */
    public String descriptiveForm();

    @Override
    public String toString();
}
