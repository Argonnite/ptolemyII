/*

 Copyright (c) 1997-2014 The Regents of the University of California.
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

package ptolemy.vergil.gt;

import java.util.Map;
import java.util.TreeMap;

import diva.graph.GraphController;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;
import ptolemy.kernel.util.NamedObj;
import ptolemy.vergil.basic.NamedObjController;
import ptolemy.vergil.basic.NodeControllerFactory;
import ptolemy.vergil.modal.modal.HierarchicalStateController;

/**

 @author Thomas Huining Feng
 @version $Id: StateMatcherController.java 72972 2015-08-05 23:34:57Z cxh $
 @since Ptolemy II 8.0
 @Pt.ProposedRating Red (tfeng)
 @Pt.AcceptedRating Red (tfeng)
 */
public class StateMatcherController extends HierarchicalStateController {

    /**
     * @param controller
     */
    public StateMatcherController(GraphController controller) {
        super(controller);
    }

    /**
     * @param controller
     * @param access
     */
    public StateMatcherController(GraphController controller, Access access) {
        super(controller, access);
    }

    public static class Factory extends NodeControllerFactory {

        /** Construct a new attribute with the given container and name.
         *  @param container The container.
         *  @param name The name.
         *  @exception IllegalActionException If the attribute cannot be contained
         *   by the proposed container.
         *  @exception NameDuplicationException If the container already has an
         *   attribute with this name.
         */
        public Factory(NamedObj container, String name)
                throws NameDuplicationException, IllegalActionException {
            super(container, name);
        }

        ///////////////////////////////////////////////////////////////////
        ////                         public methods                    ////

        /** Return a new node controller.  This base class returns an
         *  instance of IconController.  Derived
         *  classes can return some other class to customize the
         *  context menu.
         *  @param controller The associated graph controller.
         *  @return A new node controller.
         */
        @Override
        public NamedObjController create(GraphController controller) {
            return new StateMatcherController(controller);
        }
    }

    /** Return a map with the keys as the names of the refinement types, and the
     *  values as the names of the classes that implement those refinement
     *  types.
     *  @return The map of supported refinement types.
     */
    @Override
    protected Map<String, String> getRefinementClasses() {
        Map<String, String> map = new TreeMap<String, String>();
        map.put("CompositeActorMatcher Refinement",
                "ptolemy.actor.gt.CompositeActorMatcher");
        return map;
    }
}
