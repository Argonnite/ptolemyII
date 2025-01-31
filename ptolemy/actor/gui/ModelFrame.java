/* Top-level window containing a Ptolemy II model.

 Copyright (c) 1998-2014 The Regents of the University of California.
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
// FIXME: To do:
//  - Fix printing.
//  - Handle file changes (warn when discarding modified models).
package ptolemy.actor.gui;

import java.awt.BorderLayout;
import java.awt.Color;

import javax.swing.JOptionPane;

import ptolemy.actor.CompositeActor;
import ptolemy.actor.ExecutionListener;
import ptolemy.actor.Manager;
import ptolemy.kernel.util.NamedObj;
import ptolemy.moml.Documentation;

///////////////////////////////////////////////////////////////////
//// ModelFrame

/**
 ModelFrame is a top-level window containing a Ptolemy II model control panel.
 It contains a ModelPane, and has a menu bar and a status bar for
 message reporting.  This class is intended to be used with
 composite actors, which are executable models.

 @see ModelPane
 @author Edward A. Lee
 @version $Id: ModelFrame.java 69607 2014-07-30 17:07:26Z cxh $
 @since Ptolemy II 0.4
 @Pt.ProposedRating Green (eal)
 @Pt.AcceptedRating Yellow (janneck)
 */
@SuppressWarnings("serial")
public class ModelFrame extends PtolemyFrame implements ExecutionListener {
    // FIXME: Possibly this class could also handle atomic actors.
    // This might be useful for code generation.

    /** Construct a frame to control the specified Ptolemy II model.
     *  After constructing this, it is necessary to call
     *  setVisible(true) to make the frame appear.  This creates an
     *  instance of ModelPane and puts it in a top-level window.  This
     *  is typically done by calling show() on the controlling
     *  tableau.
     *  @see ModelPane
     *  @see Tableau#show()
     *  @see ModelPane
     *  @param model The model to put in this frame, or null if none.
     */
    public ModelFrame(CompositeActor model) {
        this(model, null);
    }

    /** Construct a frame to control the specified Ptolemy II model.
     *  After constructing this, it is necessary to call
     *  setVisible(true) to make the frame appear.  This creates an
     *  instance of ModelPane and puts it in a top-level window.  This
     *  is typically done by calling show() on the controlling
     *  tableau.
     *  @see ModelPane
     *  @see Tableau#show()
     *  @param model The model to put in this frame, or null if none.
     *  @param tableau The tableau responsible for this frame, or null if none.
     */
    public ModelFrame(CompositeActor model, Tableau tableau) {
        this(model, tableau, new ModelPane(model));
    }

    /** Construct a frame to control the specified Ptolemy II model.
     *  After constructing this, it is necessary to call
     *  setVisible(true) to make the frame appear.  This creates an
     *  instance of ModelPane and puts it in a top-level window.
     *  @see ModelPane
     *  @see Tableau#show()
     *  @param model The model to put in this frame, or null if none.
     *  @param tableau The tableau responsible for this frame, or null if none.
     *  @param pane The model pane to place inside the frame.
     */
    public ModelFrame(CompositeActor model, Tableau tableau, ModelPane pane) {
        super(model, tableau);

        _pane = pane;
        getContentPane().add(_pane, BorderLayout.CENTER);

        Manager manager = model.getManager();

        if (manager != null) {
            manager.addExecutionListener(this);
        }

        // Make the go button the default.
        _pane.setDefaultButton();

        // FIXME: Need to do something with the progress bar in the status bar.
    }

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Report that an execution error has occurred.  This method
     *  is called by the specified manager.
     *  @param manager The manager calling this method.
     *  @param throwable The throwable being reported.
     */
    @Override
    public void executionError(Manager manager, Throwable throwable) {
        report(throwable);
    }

    /** Report that execution of the model has finished.
     *  @param manager The manager calling this method.
     */
    @Override
    public void executionFinished(Manager manager) {
        // Display the amount of time and memory used.
        // See http://bugzilla.ecoinformatics.org/show_bug.cgi?id=5571
        // There is similar code in ptolemy/vergil/basic/RunnableGraphController.java
        String statusMessage = manager.getStatusMessage();
        if (!statusMessage.isEmpty()) {
            statusMessage = ": " + statusMessage;
        } else {
            statusMessage = ".";
        }
        report("execution finished" + statusMessage);
    }

    /** Report that a manager state has changed.
     *  This method is called by the specified manager.
     *  @param manager The manager calling this method.
     */
    @Override
    public void managerStateChanged(Manager manager) {
        Manager.State newState = manager.getState();

        if (newState != _previousState) {
            // There is similar code in ptolemy/vergil/basic/RunnableGraphController.java
            String statusMessage = manager.getStatusMessage();
            if (statusMessage.equals(_previousStatusMessage)) {
                _previousStatusMessage = statusMessage;
                statusMessage = "";
            } else {
                _previousStatusMessage = statusMessage;
            }

            if (!statusMessage.isEmpty()) {
                statusMessage = ": " + statusMessage;
            } else {
                statusMessage = ".";
            }
            report(manager.getState().getDescription() + statusMessage);

            _previousState = newState;
        }
    }

    /** Return the container into which to place placeable objects.
     *  These are objects in a Ptolemy II model that have their own
     *  user interface, such as plotters.
     *  @return A container for graphical displays.
     */
    public ModelPane modelPane() {
        return _pane;
    }

    /** Set background color.  This overrides the base class to set the
     *  background of the contained ModelPane.
     *  @param background The background color.
     */
    @Override
    public void setBackground(Color background) {
        super.setBackground(background);
        getContentPane().setBackground(background);

        // This seems to be called in a base class constructor, before
        // this variable has been set. Hence the test against null.
        if (_pane != null) {
            _pane.setBackground(background);
        }
    }

    /** Set the associated model. This overrides the base class to add
     *  this object as an execution listener to the manager, if there is
     *  one.
     *  @param model The associated model.
     */
    public void setModel(CompositeActor model) {
        super.setModel(model);

        if (model != null) {
            if (_pane != null) {
                _pane.setModel(model);
            }

            Manager manager = model.getManager();

            if (manager != null) {
                manager.addExecutionListener(this);
            }
        }
    }

    ///////////////////////////////////////////////////////////////////
    ////                         protected methods                 ////

    /** Clear the current contents.  First, check to see whether
     *  the contents have been modified, and if so, then prompt the user
     *  to save them.  A return value of false
     *  indicates that the user has canceled the action.
     *  Then, if the user does not cancel, replace the model with a
     *  new, blank composite actor.
     *  @return False if the user cancels the clear.
     */
    @Override
    protected boolean _clear() {
        if (super._clear()) {
            setModel(new CompositeActor());
            return true;
        } else {
            return false;
        }
    }

    /** Close the window.  Override the base class to remove the
     *  execution listener from the manager, and to notify the contained
     *  ModelPane.
     *  @return False if the user cancels on a save query.
     */
    @Override
    protected boolean _close() {
        boolean result = super._close();

        // FIXME: Shouldn't the following only be done if the
        // above returns true.
        NamedObj model = getModel();

        if (model instanceof CompositeActor) {
            Manager manager = ((CompositeActor) model).getManager();

            if (manager != null) {
                manager.removeExecutionListener(this);
            }
        }

        if (_pane != null) {
            _pane.stopRun();

            // The second argument is supposed to be a button name, but there
            // is no button that would have triggered this.
            _pane.windowClosed(this, "");
        }

        return result;
    }

    /** Display more detailed information than given by _about().
     *  This class displays information contained by Documentation
     *  attributes in the associated model.
     *  @see Documentation
     */
    @Override
    protected void _help() {
        String message = "Ptolemy II model.";
        NamedObj model = getModel();

        if (model != null) {
            String tip = Documentation.consolidate(model);

            if (tip != null) {
                message = "Ptolemy II model:\n" + tip;
            }
        }

        JOptionPane.showMessageDialog(this, message, "About " + getTitle(),
                JOptionPane.INFORMATION_MESSAGE);
    }

    ///////////////////////////////////////////////////////////////////
    ////                         private variables                 ////
    // The pane in which the model data is displayed.
    private ModelPane _pane;

    /** The previous state of the manager, to avoid reporting it if it hasn't
     * changed.
     */
    private Manager.State _previousState;

    /** The Manager status message from the previous state.
     */
    private String _previousStatusMessage = "";
}
