/*
 Copyright (c) 1998-2014 The Regents of the University of California
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
 PROVIDED HEREUNDER IS ON AN  BASIS, AND THE UNIVERSITY OF
 CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 ENHANCEMENTS, OR MODIFICATIONS.

 PT_COPYRIGHT_VERSION_2
 COPYRIGHTENDKEY
 *
 */
package diva.canvas.event;

/** An adapter for layer motion listeners. The methods in this class
 * are empty -- the class is provided to make it easier to
 * produce anonymous LayerMotionListeners.
 *
 * @version        $Id: LayerMotionAdapter.java 70398 2014-10-22 23:44:32Z cxh $
 * @author         John Reekie
 */
public class LayerMotionAdapter implements LayerMotionListener {
    /** Invoked when the mouse enters a layer or figure.
     */
    @Override
    public void mouseEntered(LayerEvent e) {
    }

    /** Invoked when the mouse exits a layer or figure.
     */
    @Override
    public void mouseExited(LayerEvent e) {
    }

    /** Invoked when the mouse moves while over a layer or figure.
     */
    @Override
    public void mouseMoved(LayerEvent e) {
    }
}
