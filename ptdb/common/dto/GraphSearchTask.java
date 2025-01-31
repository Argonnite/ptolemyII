/*
@Copyright (c) 2010-2014 The Regents of the University of California.
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
/*
 *
 */
package ptdb.common.dto;

///////////////////////////////////////////////////////////////////
//// GraphSearchTask

/**
 * Task to search graphical patterns on database.
 *
 * @author Ashwini Bijwe
 * @version $Id: GraphSearchTask.java 70398 2014-10-22 23:44:32Z cxh $
 * @since Ptolemy II 10.0
 * @Pt.ProposedRating Red (abijwe)
 * @Pt.AcceptedRating Red (abijwe)
 *
 */
public class GraphSearchTask extends Task {

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /**
     * Return the graphical search criteria.
     * @return The graph search criteria.
     * @see #setGraphSearchCriteria
     */
    public DBGraphSearchCriteria getGraphSearchCriteria() {
        return _graphSearchCriteria;
    }

    /**
     * Set the graph search criteria.
     * @param graphSearchCriteria The graph search criteria.
     * @see #getGraphSearchCriteria
     */
    public void setGraphSearchCriteria(DBGraphSearchCriteria graphSearchCriteria) {
        this._graphSearchCriteria = graphSearchCriteria;
    }

    ///////////////////////////////////////////////////////////////////
    ////                         private variables                 ////
    private DBGraphSearchCriteria _graphSearchCriteria;

}
