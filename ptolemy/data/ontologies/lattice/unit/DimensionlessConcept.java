/** A concept in a dimension system ontology that represents the dimensionless
 *  unit.
 *
 * Copyright (c) 2007-2011 The Regents of the University of California. All
 * rights reserved. Permission is hereby granted, without written agreement and
 * without license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the above
 * copyright notice and the following two paragraphs appear in all copies of
 * this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE PROVIDED HEREUNDER IS ON AN
 * "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO PROVIDE
 * MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * PT_COPYRIGHT_VERSION_2 COPYRIGHTENDKEY
 *
 */
package ptolemy.data.ontologies.lattice.unit;

import ptolemy.data.ontologies.FiniteConcept;
import ptolemy.kernel.CompositeEntity;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;

///////////////////////////////////////////////////////////////////
//// DimensionlessConcept

/** A concept in a dimension system ontology that represents the dimensionless
 *  unit.
 *
 *  @author Charles Shelton
 *  @version $Id: DimensionlessConcept.java 67784 2013-10-26 16:53:27Z cxh $
 *  @since Ptolemy II 10.0
 *  @Pt.ProposedRating Red (blickly)
 *  @Pt.AcceptedRating Red (blickly)
 */
public class DimensionlessConcept extends FiniteConcept {

    /** Create a new DimensionlessConcept with the specified name and the
     *  specified ontology.
     *
     *  @param ontology The specified ontology where this concept resides.
     *  @param name The specified name for the concept.
     *  @exception NameDuplicationException If the ontology already contains a
     *   concept with the specified name.
     *  @exception IllegalActionException If the base class throws it.
     */
    public DimensionlessConcept(CompositeEntity ontology, String name)
            throws NameDuplicationException, IllegalActionException {
        super(ontology, name);
    }
}
