/* Generic tuple data structure.

@Copyright (c) 2007-2014 The Regents of the University of California.
All rights reserved.

Permission is hereby granted, without written agreement and without
license or royalty fees, to use, copy, modify, and distribute this
software and its documentation for any purpose, provided that the
above copyright notice and the following two paragraphs appear in all
copies of this software.

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
package ptolemy.actor.gt.data;

import java.util.Collection;
import java.util.LinkedList;

//////////////////////////////////////////////////////////////////////////
//// Tuple

/**
 Generic tuple data structure.

 @param <E> Type of the elements in this tuple.
 @author Thomas Huining Feng
 @version $Id: Tuple.java 69602 2014-07-30 14:20:15Z cxh $
 @since Ptolemy II 8.0
 @Pt.ProposedRating Yellow (tfeng)
 @Pt.AcceptedRating Red (tfeng)
 */
@SuppressWarnings("serial")
public class Tuple<E> extends LinkedList<E> {

    /** Construct a tuple containing all the elements of the given collection.
     *
     *  @param collection The collection.
     */
    public Tuple(Collection<E> collection) {
        super(collection);
    }

    /** Construct a tuple with all the given elements.
     *
     *  @param elements The elements.
     */
    public Tuple(E... elements) {
        for (E element : elements) {
            add(element);
        }
    }
}
