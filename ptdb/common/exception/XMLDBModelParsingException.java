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
package ptdb.common.exception;

///////////////////////////////////////////////////////////////////
//// XMLDBModelParsingException

/**
 * Exception for document or MOML parsing errors.
 *
 * @author Ashwini Bijwe
 * @version $Id: XMLDBModelParsingException.java 69607 2014-07-30 17:07:26Z cxh $
 * @since Ptolemy II 10.0
 * @Pt.ProposedRating Red (abijwe)
 * @Pt.AcceptedRating Red (abijwe)
 *
 */
@SuppressWarnings("serial")
public class XMLDBModelParsingException extends Exception {

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////
    /**
     * Construct an instance of XMLDBModelParsingException
     * with the given message.
     * @param errorMessage Exception message.
     */
    public XMLDBModelParsingException(String errorMessage) {
        super(errorMessage);
    }

    /**
     * Construct an instance to wrap other exceptions.
     * @param errorMessage The exception message.
     * @param cause The underlying cause for the exception.
     */
    public XMLDBModelParsingException(String errorMessage, Throwable cause) {
        super(errorMessage, cause);
        this._cause = cause;
    }

    /**
     * Return the underlying cause for the exception.
     */
    @Override
    public Throwable getCause() {
        return this._cause;
    }

    ///////////////////////////////////////////////////////////////////
    ////                         private variables                 ////

    private Throwable _cause;

}
