/* Debug renderer.

 Copyright (c) 1999-2013 The Regents of the University of California.
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
package ptolemy.vergil.kernel;

import java.awt.Color;

///////////////////////////////////////////////////////////////////
//// ShadowRenderer

/**
 Provide a shadow for icons.

 @author Edward A. Lee
 @version $Id: ShadowRenderer.java 67784 2013-10-26 16:53:27Z cxh $
 @since Ptolemy II 10.0
 @Pt.ProposedRating Red (celaine)
 @Pt.AcceptedRating Red (celaine)
 */
public class ShadowRenderer extends AnimationRenderer {
    /** Create a new selection renderer with the default prototype
     *  decorator.
     */
    public ShadowRenderer() {
        _prototypeDecorator = new ShadowHighlighter(Color.gray, 4.0f);
    }

    /** Create a new renderer with the given color.
     *  @param color The shadow color.
     */
    public ShadowRenderer(Color color) {
        _prototypeDecorator = new ShadowHighlighter(color, 4.0f);
    }
}
