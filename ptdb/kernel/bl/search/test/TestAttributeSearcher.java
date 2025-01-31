/*
@Copyright (c) 2010-2013 The Regents of the University of California.
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
package ptdb.kernel.bl.search.test;

import org.junit.Test;

import ptdb.common.dto.SearchCriteria;
import ptdb.common.exception.DBConnectionException;
import ptdb.kernel.bl.search.AttributeSearcher;

///////////////////////////////////////////////////////////////////
//// TestAttributeSearcher

/**
 * JUnit test case for testing AttributeSearcher.
 *
 * @author Alek Wang
 * @version $Id: TestAttributeSearcher.java 67784 2013-10-26 16:53:27Z cxh $
 * @since Ptolemy II 10.0
 * @Pt.ProposedRating red (wenjiaow)
 * @Pt.AcceptedRating red (wenjiaow)
 *
 */
public class TestAttributeSearcher {

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /**
     * The the wholeSearchDone() method.
     *
     * <p>Test the case when there is no next result handler set in the
     * searcher. </p>
     * @exception DBConnectionException Thrown if the DB connection cannot be
     * attained.
     */
    @Test
    public void testWholeSearchDoneWithoutNextHandler()
            throws DBConnectionException {
        AttributeSearcher attributeSearcher = new AttributeSearcher(
                new SearchCriteria());

        attributeSearcher.wholeSearchDone();
    }

}
