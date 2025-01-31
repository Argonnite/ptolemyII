/* Generated By:JJTree&JavaCC: Do not edit this line. PtParser.java */
/*
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

 PT_COPYRIGHT_VERSION_2
 COPYRIGHTENDKEY


 Created : May 1998

 */
package ptolemy.data.expr;

import java.io.IOException;
import java.io.InputStream;
import java.io.StringReader;
import java.net.URL;
import java.util.Hashtable;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;

import org.w3c.dom.Document;
import org.xml.sax.InputSource;

///////////////////////////////////////////////////////////////////
//// XmlParser.java

/**
 This class parses a XML string token to a DOM document.


 @author Yang Zhao
 @version $Id: XMLParser.java 70398 2014-10-22 23:44:32Z cxh $
 @since Ptolemy II 4.0
 @Pt.ProposedRating Yellow (nsmyth)
 @Pt.AcceptedRating Yellow (yuhong)

 */
public class XMLParser {
    public XMLParser() throws Exception {
        if (_documentBuilderFactory == null) {
            _documentBuilderFactory = DocumentBuilderFactory.newInstance();
        }

        _documentBuilder = _documentBuilderFactory.newDocumentBuilder();
        _documentBuilder.setEntityResolver(new EntityResolver());
    }

    /** Generate the document tree for the specified XML string. The Document
     *  (the root of the document tree) is
     *  returned. An exception will be thrown if the parse fails.
     *  @param str The XML string to be parsed.
     *  @exception Exception If the parse fails.
     *  @return The document for the parse tree.
     */
    public Document parser(String str) throws Exception {
        return _documentBuilder.parse(new InputSource(new StringReader(str)));
    }

    /** Generate the document tree for the specified input stream.
     *  The Document (the root of the document tree) is
     *  returned. An exception will be thrown if the parse fails.
     *  @param is The input steam to be parsed.
     *  @exception Exception If the parse fails.
     *  @return The document for the parse tree.
     */
    public Document parser(InputStream is) throws Exception {
        return _documentBuilder.parse(is);
    }

    /** The entity resolver that tries to first load a DTD file locally, and if
     *  it is not found, looks for it on the Internet using the DTD file's
     *  system ID. The DTD file, as well as its version, is uniquely identified
     *  by its public ID.
     *
     *  @author Thomas Feng
     *  @version $Id: XMLParser.java 70398 2014-10-22 23:44:32Z cxh $
     *  @since Ptolemy II 4.0
     *  @Pt.ProposedRating Green (tfeng)
     *  @Pt.AcceptedRating Red (tfeng)
     */
    public static class EntityResolver implements org.xml.sax.EntityResolver {

        /** Resolve an entity (a DTD file) by first looking for it locally. If
         *  it is not found locally, this resolver tries to grab it from the
         *  Internet using its systemId.
         *
         *  @param publicId The public ID of the entity, for example,
         *   "-//UC Berkeley//DTD MoML 1//EN" for Ptolemy MoML 1.0.
         *  @param systemId The system ID of the entity, for example,
         *   "http://ptolemy.eecs.berkeley.edu/xml/dtd/MoML_1.dtd".
         *  @return The input source that contains the content of the DTD, or
         *   null if it cannot be loaded either locally or from the Internet.
         */
        @Override
        public InputSource resolveEntity(String publicId, String systemId) {
            if (publicId == null) {
                return null;
            } else {
                if (_localResources.containsKey(publicId)) {
                    String localFile = (String) _localResources.get(publicId);
                    InputStream localStream = getClass().getResourceAsStream(
                            localFile);
                    if (localStream != null) {
                        return new InputSource(localStream);
                    }
                }
                try {
                    URL url = new URL(systemId);
                    return new InputSource(url.openStream());
                } catch (IOException e) {
                    return null;
                }
            }
        }

        /** The string-to-string mapping between entities' publicId's and the
         *  names of the local files in which they are stored. The file names
         *  are relative to the path of the current class.
         */
        private static final Hashtable _localResources = new Hashtable();

        static {
            _localResources.put("-//UC Berkeley//DTD MoML 1//EN",
                    "../../moml/MoML_1.dtd");
        }
    }

    ///////////////////////////////////////////////////////////////////
    ////                         private variables                 ////
    private DocumentBuilderFactory _documentBuilderFactory = null;

    private DocumentBuilder _documentBuilder;
}
