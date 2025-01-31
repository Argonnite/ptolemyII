/*
 Interface that defines platform specific behavior of the video actor.

 Copyright (c) 2011-2012 The Regents of the University of California.
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

package ptserver.actor.lib.tld;

import ptolemy.actor.injection.PortablePlaceable;
import ptolemy.kernel.util.IllegalActionException;

///////////////////////////////////////////////////////////////////
//// VideoInterface
/**
 * Interface that defines platform specific behavior of the video actor.
 * @author Anar Huseynov
 * @version $Id: VideoInterface.java 67784 2013-10-26 16:53:27Z cxh $
 * @since Ptolemy II 10.0
 * @Pt.ProposedRating Red (ahuseyno)
 * @Pt.AcceptedRating Red (ahuseyno)
 */
public interface VideoInterface extends PortablePlaceable {

    /**
     * Initialize the interface.
     * @param video the video whose interface is initialized.
     */
    public void init(Video video);

    /**
     * Callback for video.initialize().
     * @exception IllegalActionException if there is problem initializing.
     */
    public void initialize() throws IllegalActionException;

    /**
     * Callback for video.stop().
     */
    public void stop();

    /**
     * Callback for video.fire().
     * @exception IllegalActionException if there is problem initializing.
     */
    public void fire() throws IllegalActionException;

    /**
     * Callback for video.updateBoundingBox(float, float, float, float).
     * @param x1 top left x
     * @param y1 top left y
     * @param x2 bottom right x
     * @param y2 bottom right y
     */
    public void updateBoundingBox(float x1, float y1, float x2, float y2);
}
