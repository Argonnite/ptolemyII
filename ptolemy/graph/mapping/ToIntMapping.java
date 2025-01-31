/* A mapping from objects into int values.

 Copyright (c) 2003-2013 The University of Maryland.
 All rights reserved.
 Permission is hereby granted, without written agreement and without
 license or royalty fees, to use, copy, modify, and distribute this
 software and its documentation for any purpose, provided that the above
 copyright notice and the following two paragraphs appear in all copies
 of this software.

 IN NO EVENT SHALL THE UNIVERSITY OF MARYLAND BE LIABLE TO ANY PARTY
 FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
 THE UNIVERSITY OF MARYLAND HAS BEEN ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.

 THE UNIVERSITY OF MARYLAND SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
 PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
 MARYLAND HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 ENHANCEMENTS, OR MODIFICATIONS.

 */
package ptolemy.graph.mapping;

///////////////////////////////////////////////////////////////////
//// ToIntMapping

/** A mapping from objects into int values.

 @since Ptolemy II 4.0
 @Pt.ProposedRating Red (ssb)
 @Pt.AcceptedRating Red (ssb)
 @author Shuvra S. Bhattacharyya, Shahrooz Shahparnia
 @version $Id: ToIntMapping.java 65763 2013-03-07 01:54:37Z cxh $
 */
public interface ToIntMapping extends Mapping {
    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Return the int value associated with the given object.
     *  @param object The given object.
     *  @return The int value that is associated with given object under
     *  this mapping.
     */
    public int toInt(Object object);
}
