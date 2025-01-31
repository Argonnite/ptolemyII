/* An attribute that creates a tableau to view a TDL model.

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
 */
package ptolemy.vergil.tdl;

import ptolemy.actor.gui.Configuration;
import ptolemy.actor.gui.Effigy;
import ptolemy.actor.gui.PtolemyEffigy;
import ptolemy.actor.gui.Tableau;
import ptolemy.actor.gui.TableauFactory;
import ptolemy.domains.modal.kernel.FSMActor;
import ptolemy.domains.tdl.kernel.TDLModule;
import ptolemy.domains.tdl.kernel.TDLModuleDirector;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;
import ptolemy.kernel.util.NamedObj;

//////////////////////////////////////////////////////////////////////////
//// TdlTableauFactory

/** An attribute that creates a tableau to view a Timing Description
    Language (TDL) model.

    @author Patricia Derler
    @version $Id: TdlTableauFactory.java 70398 2014-10-22 23:44:32Z cxh $
    @since Ptolemy II 8.0
    @Pt.ProposedRating Red (eal)
    @Pt.AcceptedRating Red (eal)
 */
public class TdlTableauFactory extends TableauFactory {
    /** Create a factory with the given name and container.
     *  @param container The container.
     *  @param name The name.
     *  @exception IllegalActionException If the container is incompatible
     *   with this attribute.
     *  @exception NameDuplicationException If the name coincides with
     *   an attribute already in the container.
     */
    public TdlTableauFactory(NamedObj container, String name)
            throws IllegalActionException, NameDuplicationException {
        super(container, name);
    }

    /** Create a tableau for the specified effigy. The tableau will be
     *  created with a new unique name with the specified effigy as its
     *  container.
     *  @param effigy The model effigy.
     *  @return A tableau for the effigy, or null if one cannot be created.
     *  @exception Exception If the factory should be able to create a
     *   Tableau for the effigy, but something goes wrong.
     */
    @Override
    public Tableau createTableau(Effigy effigy) throws Exception {
        Configuration configuration = (Configuration) effigy.toplevel();

        TDLModule model = (TDLModule) ((PtolemyEffigy) effigy).getModel();
        FSMActor controller = ((TDLModuleDirector) model.getDirector())
                .getController();
        return configuration.openModel(controller);
    }
}
