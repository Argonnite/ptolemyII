/* An event to perform pattern matching.

 Copyright (c) 2008-2014 The Regents of the University of California.
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
package ptolemy.actor.gt.controller;

import ptolemy.actor.gt.TransformationMode;
import ptolemy.kernel.CompositeEntity;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;
import ptolemy.kernel.util.Settable;

//////////////////////////////////////////////////////////////////////////
//// Match

/**
 An event to perform pattern matching. This is a special case of transformation
 that does not modify the model in the model parameter.

 @author Thomas Huining Feng
 @version $Id: Match.java 70398 2014-10-22 23:44:32Z cxh $
 @since Ptolemy II 8.0
 @Pt.ProposedRating Yellow (tfeng)
 @Pt.AcceptedRating Red (tfeng)
 @see Transform
 */
public class Match extends Transform {

    /** Construct an event with the given name contained by the specified
     *  composite entity. The container argument must not be null, or a
     *  NullPointerException will be thrown. This event will use the
     *  workspace of the container for synchronization and version counts.
     *  If the name argument is null, then the name is set to the empty
     *  string.
     *  Increment the version of the workspace.
     *  This constructor write-synchronizes on the workspace.
     *
     *  @param container The container.
     *  @param name The name of the state.
     *  @exception IllegalActionException If the state cannot be contained
     *   by the proposed container.
     *  @exception NameDuplicationException If the name coincides with
     *   that of an entity already in the container.
     */
    public Match(CompositeEntity container, String name)
            throws IllegalActionException, NameDuplicationException {
        super(container, name);

        _transformation.mode.setExpression(TransformationMode.Mode.MATCH_ONLY
                .toString());
        mode.setExpression(TransformationMode.Mode.MATCH_ONLY.toString());
        mode.setVisibility(Settable.NONE);
    }
}
