/* A status bar to put at the bottom of application windows.

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
package ptolemy.gui;

// Java imports.
import java.awt.Color;
import java.awt.Dimension;

import javax.swing.BoxLayout;
import javax.swing.JPanel;
import javax.swing.JProgressBar;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;

///////////////////////////////////////////////////////////////////
//// StatusBar

/**
 A status bar with a message and a progress bar, for putting at the
 bottom of application windows.

 <p>NOTE: This class is borrowed from Diva and modified.

 @author John Reekie and Edward A. Lee
 @version $Id: StatusBar.java 69607 2014-07-30 17:07:26Z cxh $
 @since Ptolemy II 0.4
 @Pt.ProposedRating Yellow (eal)
 @Pt.AcceptedRating Red (eal)
 */
@SuppressWarnings("serial")
public class StatusBar extends JPanel {
    /** Create a new status bar with an empty label and progress at zero.
     */
    public StatusBar() {
        setLayout(new BoxLayout(this, BoxLayout.X_AXIS));
        // Set the maximum size so that resizing the Vergil welcome window
        // does not result in a large, ugly status bar.
        setMaximumSize(new Dimension(Short.MAX_VALUE, 25));
        _message = new JTextField(20);
        _message.setEditable(false);
        _message.setAlignmentX(LEFT_ALIGNMENT);
        add(_message);

        _progressPanel = new JPanel();
        _progressPanel.setBorder(new EmptyBorder(0, 3, 0, 3));
        _progressPanel.setAlignmentX(RIGHT_ALIGNMENT);
        add(_progressPanel);

        _progress = new JProgressBar();
        _progress.setMinimum(0);
        _progress.setMaximum(100);
        _progress.setValue(0);
        _progressPanel.add(_progress);
    }

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Return the progress bar associated with this status bar.
     *  To adjust the displayed value, call setValue() with a number
     *  between zero and 100.
     *  @return The progress bar.
     */
    public JProgressBar progressBar() {
        return _progress;
    }

    /** Set the background color.
     *  @param color The background color.
     */
    @Override
    public void setBackground(Color color) {
        super.setBackground(color);

        // For some incomprehensible reason, it is possible for this
        // to be null, even though it is set to non-null in the constructor.
        if (_progress != null) {
            _progressPanel.setBackground(color);
        }
    }

    /** Set the message displayed in the status bar. If the argument
     *  is null, then clear the message.
     *  @param message The message to display.
     */
    public void setMessage(String message) {
        _message.setText(message);
        // Force an immediate repaint, since this message might be a
        // status update about actions in progress.
        _message.paintImmediately(_message.getBounds());
    }

    ///////////////////////////////////////////////////////////////////
    ////                         private variables                 ////
    // The progress bar associated with this status bar.
    private JProgressBar _progress;

    // A panel for the progress bar.
    private JPanel _progressPanel;

    // The label that displays the status message.
    // Use JTextField instead of JLabel because there appears to be no
    // way to control the width of a label except by writing text to it.
    private JTextField _message;
}
