/* Marker interface for modal directors.

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
package ptolemy.actor;

//////////////////////////////////////////////////////////////////////////
//// QuasiTransparentDirector

/**
 This is a marker interface for modal directors. Directors like FSMDirector
 and CaseDirector implement this interface to indicate to other directors,
 such as ContinuousDirector, that they have modal behavior, but are
 otherwise free of semantics.  ContinuousDirector uses this information
 to coordinate solvers across levels of the hierarchy.

 @author Edward A. Lee
 @version $Id: QuasiTransparentDirector.java 43476 2006-08-21 23:54:24Z cxh $
 @since Ptolemy II 5.2
 @Pt.ProposedRating Green (eal)
 @Pt.AcceptedRating Red (cxh)
 */
public interface QuasiTransparentDirector {
}
