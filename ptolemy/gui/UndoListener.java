/* UndoListener helper

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
package ptolemy.gui;

import java.awt.Toolkit;
import java.awt.event.ActionEvent;
import java.awt.event.KeyEvent;

import javax.swing.AbstractAction;
import javax.swing.ActionMap;
import javax.swing.InputMap;
import javax.swing.KeyStroke;
import javax.swing.event.UndoableEditEvent;
import javax.swing.event.UndoableEditListener;
import javax.swing.text.JTextComponent;
import javax.swing.undo.CannotRedoException;
import javax.swing.undo.CannotUndoException;
import javax.swing.undo.CompoundEdit;
import javax.swing.undo.UndoManager;

/**
 * An Undo/Redo listener for use with a JTextComponent.
 *
 * <p> A convenience constructor has been provided such that a caller
 * can immediately have default shortcut key mappings for undo/redo
 * actions on the text component
 *
 * @author Ben Leinfelder
 * @version $Id: UndoListener.java 73140 2015-08-15 23:04:12Z eal $
 * @since Ptolemy II 8.0
 * @Pt.ProposedRating Yellow (cxh)
 * @Pt.AcceptedRating Red (cx)
 * @author ben leinfelder
 */
public class UndoListener implements UndoableEditListener {

    /**
     * Construct an undo listener.
     * <p>This constructor allows simple usage without setting up key mapping
     * automatically (it is then the responsibilty of the caller to
     * provide a mechanism for invoking the undo and redo actions.)
     */
    public UndoListener() {
    }

    /**
     * Construct an undo listener with default key mappings.
     * The default key mappings invoke the undo and redo actions on
     * <i>textArea</i> .
     * <p>A typical usage pattern would be:
     * <code>
     *         JTextArea textArea = new JTextArea("testing");
     *         textArea.getDocument().addUndoableEditListener(new UndoListener(textArea));
     * </code>
     * @param textArea the text component that is being listened to
     * and upon which undo/redo actions will be performed
     */
    public UndoListener(JTextComponent textArea) {

        // Set the mapping for shortcut keys;
        InputMap inputMap = textArea.getInputMap();
        ActionMap actionMap = textArea.getActionMap();

        // Ctrl-z or equivalent to undo.
        inputMap.put(KeyStroke.getKeyStroke(KeyEvent.VK_Z, Toolkit
                .getDefaultToolkit().getMenuShortcutKeyMask()), "undo");
        actionMap.put("undo", _undoAction);
        // Ctrl-y or equivalent to redo
        inputMap.put(KeyStroke.getKeyStroke(KeyEvent.VK_Y, Toolkit
                .getDefaultToolkit().getMenuShortcutKeyMask()), "redo");
        actionMap.put("redo", _redoAction);
    }
    
    /** End a compound edit. */
    public synchronized void endCompoundEdit() {
        if (_compoundEdit != null) {
            _compoundEdit.end();
            _undo.addEdit(_compoundEdit);
            _undoAction._updateUndoState();
            _redoAction._updateRedoState();
            _compoundEdit = null;
        }
    }

    /** Perform a redo. */
    public synchronized void redo() throws CannotUndoException {
        _undo.redo();
    }
    
    /** Start a compound undo edit. */
    public synchronized void startCompoundEdit() {
        _compoundEdit = new CompoundEdit();
    }

    /** Perform an undo. */
    public synchronized void undo() throws CannotUndoException {
        _undo.undo();
    }

    /** Remember the edit and update the action state.
     *  @param event The event that occurred.
     */
    @Override
    public synchronized void undoableEditHappened(UndoableEditEvent event) {
        if (_compoundEdit == null) {
            _undo.addEdit(event.getEdit());
            _undoAction._updateUndoState();
            _redoAction._updateRedoState();
        } else {
            _compoundEdit.addEdit(event.getEdit());
        }
    }

    ///////////////////////////////////////////////////////////////////
    ////                         protected variables               ////

    /** The redo action. */
    protected RedoAction _redoAction = new RedoAction();

    /** A compound undo edit, or null if none is progress. */
    protected CompoundEdit _compoundEdit;
    
    /** The undo action. */
    protected UndoAction _undoAction = new UndoAction();

    /** The undo manager. */
    protected UndoManager _undo = new UndoManager();

    /**
     * Perform the undo action.
     */
    @SuppressWarnings("serial")
    protected class UndoAction extends AbstractAction {
        public UndoAction() {
            super("Undo");
            setEnabled(false);
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            synchronized(UndoListener.this) {
                try {
                    _undo.undo();
                } catch (CannotUndoException ex) {
                    throw new RuntimeException("Unable to undo.", ex);
                }
                _updateUndoState();
                _redoAction._updateRedoState();
            }
        }

        /** Depending on the whether the undo manager can undo, enable
         *  and disable the undo state.
         */
        protected void _updateUndoState() {
            if (_undo.canUndo()) {
                setEnabled(true);
            } else {
                setEnabled(false);
            }
        }
    }

    /**
     * Perform the redo action.
     */
    @SuppressWarnings("serial")
    protected class RedoAction extends AbstractAction {
        public RedoAction() {
            super("Redo");
            setEnabled(false);
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            synchronized(UndoListener.this) {
                try {
                    _undo.redo();
                } catch (CannotRedoException ex) {
                    throw new RuntimeException("Unable to redo.", ex);
                }
                _updateRedoState();
                _undoAction._updateUndoState();
            }
        }

        /** Depending on the whether the undo manager can redo, enable
         *  and disable the undo state.
         */
        protected void _updateRedoState() {
            if (_undo.canRedo()) {
                setEnabled(true);
            } else {
                setEnabled(false);
            }
        }
    }
}
