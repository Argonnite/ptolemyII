/* A viewer for HTML files.

 Copyright (c) 2000-2014 The Regents of the University of California.
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
package ptolemy.actor.gui;

import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.AffineTransform;
import java.awt.print.PageFormat;
import java.awt.print.Printable;
import java.awt.print.PrinterException;
import java.io.File;
import java.io.IOException;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.net.MalformedURLException;
import java.net.URL;

import javax.swing.BoxLayout;
import javax.swing.JEditorPane;
import javax.swing.JScrollPane;
import javax.swing.event.HyperlinkEvent;
import javax.swing.event.HyperlinkListener;
import javax.swing.text.html.HTMLDocument;
import javax.swing.text.html.HTMLEditorKit;
import javax.swing.text.html.HTMLFrameHyperlinkEvent;
import javax.swing.text.html.StyleSheet;

import ptolemy.gui.Top;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.StringAttribute;
import ptolemy.util.ClassUtilities;
import ptolemy.util.FileUtilities;
import ptolemy.util.MessageHandler;

///////////////////////////////////////////////////////////////////
//// HTMLViewer

/**
 This class is a toplevel frame that can view HTML documents.
 This class supports hyperlinks, and has a particular feature to
 force hyperlinks to be opened in a browser.  To do that, specify
 a hyperlink by giving a fragment (also called a reference) as "in_browser".
 For example, the following URL will be opened in a browser:
 <pre>
 &lt;a href="http://ptolemy.eecs.berkeley.edu#in_browser"&gt;
 </pre>

 If the URL is <code>about:copyright</code>, then the copyrights will
 be generated by {@link ptolemy.actor.gui.GenerateCopyrights#generateHTML(Configuration)}

 <p>If the URL is <code>about:configuration</code>, then the
 Ptolemy II configuration will be expanded by and the MoML of the
 configuration will be returned.  This is a good way to test the
 configuration.

 <p>If the URL starts with <code>ptdoc:</code>, then the Ptolemy
 documentation is opened.  For example
 <pre>
 &lt; a href="ptdoc:ptolemy.actor.gui.HTMLViewer"&gt;HTMLViewer&lt;/a&gt;
 </pre>
 will open the Ptolemy documentation for this class.  For details see
 {@link ptolemy.vergil.basic.GetDocumentationAction}.

 <p>If the URL starts with <code>$CLASSPATH</code> then the classpath
 is searched.</p>

 <p>This class supports printing and will save the text to a .html file.
 The url that is viewed can be changed by calling the <i>setPage</i> method.

 @author Steve Neuendorffer and Edward A. Lee
 @version $Id: HTMLViewer.java 70402 2014-10-23 00:52:20Z cxh $
 @since Ptolemy II 1.0
 @Pt.ProposedRating Yellow (eal)
 @Pt.AcceptedRating Red (johnr)
 */
@SuppressWarnings("serial")
public class HTMLViewer extends TableauFrame implements Printable,
HyperlinkListener {
    /** Construct a blank viewer.
     */
    public HTMLViewer() {
        _init();
    }

    /** Construct an empty top-level frame managed by the specified
     *  tableau and the default status bar. After constructing this,
     *  it is necessary to call setVisible(true) to make the frame appear.
     *  It may also be desirable to call centerOnScreen().
     *  @param tableau The managing tableau.
     */
    public HTMLViewer(Tableau tableau) {
        super(tableau);
        _init();
    }

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Give a ptdoc: path, open the PtDoc viewer.
     *  @param configuration The Configuration.
     *  @param className The dot separated classname, such as
     *  ptolemy.kernel.util.NamedObj.
     *  @param context The controlling Effigy.
     *  @exception IllegalActionException If thrown while searching
     *  for the _getDocumentationActionClassName attribute in the
     *  Configuration.
     *  @exception ClassNotFoundException If the class named by the
     *  _getDocumentationActionClassName attribute or
     *  ptolemy.vergil.basic.GetDocumentationAction is not found.
     *  @exception NoSuchMethodException If the class does not have
     *  a getDocumentation(Configuration, String, Effigy) method.
     *  @exception IllegalAccessException If thrown while calling
     *  the getDocumentation() method.
     *  @exception InvocationTargetException If thrown while calling
     *  the getDocumentation() method.
     */
    public static void getDocumentation(Configuration configuration,
            String className, Effigy context) throws IllegalActionException,
            ClassNotFoundException, NoSuchMethodException,
            IllegalAccessException, InvocationTargetException {
        // Read the _getDocumentationActionClassName from
        // the configuration and attempt to call it.
        // If _getDocumentationActionClassName is not set,
        // then default to vergil GetDocumentationAction.

        // FIXME: Refactor this code, use DocApplicationSpecializer

        StringAttribute getDocumentationActionClassNameStringAttribute = (StringAttribute) configuration
                .getAttribute("_getDocumentationActionClassName",
                        StringAttribute.class);
        String getDocumentationActionClassName = null;
        if (getDocumentationActionClassNameStringAttribute != null) {
            getDocumentationActionClassName = getDocumentationActionClassNameStringAttribute
                    .getExpression();
        } else {
            getDocumentationActionClassName = "ptolemy.vergil.basic.GetDocumentationAction";
        }
        Class getDocumentationActionClass = Class
                .forName(getDocumentationActionClassName);
        Method getDocumentationMethod = getDocumentationActionClass.getMethod(
                "getDocumentation", new Class[] { Configuration.class,
                        String.class, Effigy.class });
        //GetDocumentationAction.getDocumentation(configuration,
        //        event.getDescription().substring(6), getEffigy());
        getDocumentationMethod.invoke(null, new Object[] { configuration,
                className, context });
    }

    /** Get the page displayed by this viewer.
     *  @return The page displayed by this viewer.
     *  @see #setPage(URL)
     */
    public URL getPage() {
        return pane.getPage();
    }

    /** React to a hyperlink being clicked on in the rendered HTML.
     *  This method opens the hyperlink URL in a new window, using
     *  the configuration.  This means that hyperlinks can reference
     *  any file that the configuration can open, including MoML files.
     *  It is assumed this is called in the AWT event thread.
     *  @param event The hyperlink event.
     */
    @Override
    public void hyperlinkUpdate(HyperlinkEvent event) {
        if (event.getEventType() == HyperlinkEvent.EventType.ENTERED) {
            if (event.getURL() != null) {
                // If the link was 'about:copyright',
                // then getURL() returns null, but getDescription() works.
                report(event.getURL().toString());
            } else if (event.getDescription() != null) {
                report(event.getDescription());
            }
        } else if (event.getEventType() == HyperlinkEvent.EventType.EXITED) {
            report("");
        } else if (event.getEventType() == HyperlinkEvent.EventType.ACTIVATED) {
            URL newURL = event.getURL();

            if (event.getDescription().startsWith("about:")) {
                // Process "about:" hyperlinks
                try {
                    newURL = HTMLAbout.hyperlinkUpdate(event,
                            getConfiguration());

                } catch (Throwable throwable) {
                    MessageHandler.error(
                            "Problem processing '" + event.getDescription()
                            + "'.", throwable);
                }
            }

            if (event.getDescription().startsWith("ptdoc:")) {
                // Process "ptdoc:" hyperlinks
                try {
                    getDocumentation(getConfiguration(), event.getDescription()
                            .substring(6), getEffigy());
                } catch (Throwable throwable) {
                    MessageHandler.error(
                            "Problem processing '" + event.getDescription()
                            + "'.", throwable);
                }
            }
            // NOTE: It would be nice to use target="_browser" or some
            // such, but this doesn't work. Targets aren't
            // seen unless the link is inside a frame,
            // regrettably.  An alternative might be to
            // use the "userInfo" part of the URL,
            // defined at http://www.ncsa.uiuc.edu/demoweb/url-primer.html
            boolean useBrowser = false;

            if (newURL != null) {
                String ref = newURL.getRef();

                if (ref != null) {
                    useBrowser = ref.equals("in_browser");
                }

                String protocol = newURL.getProtocol();

                if (protocol != null) {
                    // Suggested mailto: extension from Paul Lieverse
                    useBrowser |= protocol.equals("mailto");
                }
            } else {
                // The URL is null, for some reason. This could happen,
                // for example, if the HTML to be displayed is specified
                // using setText() instead of setPage().  In this case,
                // if relative URLs are to be supported, it is up to the
                // using class to call setBase() to specify the relative
                // URL.
                try {
                    newURL = new URL(_base, event.getDescription());
                } catch (MalformedURLException e) {
                    report("Link error: " + event.getDescription());
                    return;
                }
            }

            if (!useBrowser && event instanceof HTMLFrameHyperlinkEvent) {
                // For some bizarre reason, when a link is within a frame,
                // it needs to be handled differently than if its not in
                // a frame.
                HTMLFrameHyperlinkEvent frameHyperlinkEvent = (HTMLFrameHyperlinkEvent) event;
                String target = frameHyperlinkEvent.getTarget();

                if (target.equals("_browser")) {
                    useBrowser = true;
                } else if (!target.equals("_blank") && !target.equals("_top")) {
                    // If the target is "_blank" or "_top", then we want to open
                    // in a new window, so we defer to the below.
                    HTMLDocument doc = (HTMLDocument) pane.getDocument();
                    try {
                        doc.processHTMLFrameHyperlinkEvent(frameHyperlinkEvent);
                    } catch (Exception ex) {
                        MessageHandler.error("Hyperlink reference failed", ex);
                    }

                    return;
                }
            }

            try {
                // If the URL is the same as the one we are currently in,
                // then we are dealing with a link within the same file,
                // so we want to stay in the same window.
                if (getPage() != null
                        && newURL.getFile().equals(getPage().getFile())) {
                    pane.setPage(newURL);
                } else {
                    // Attempt to open in a new window.
                    Configuration configuration = getConfiguration();

                    // FIXME: Should detect target == "_blank" and open
                    // in a new window, rather than always opening in a new
                    // window.  However, regrettably, there appears to be
                    // no way to access the target unless the event is an
                    // instanceof HTMLFrameHyperlinkEvent, which it is only
                    // if the HTML happens to be in a frame.  Moreover, it would
                    // be tricky to do this because we would have to check that
                    // the content type is "text/html" or "text/rtf", and we
                    // would have to associate our tableau with a new effigy.
                    // Nonetheless, it's perfectly doable if we can get the
                    // target...
                    if (configuration != null) {
                        if (useBrowser && BrowserEffigy.staticFactory != null) {
                            // Note that openModel will call MessageHandler
                            // if there are problems, so there is no point
                            // putting a try/catch block here.
                            configuration.openModel(newURL, newURL,
                                    newURL.toExternalForm(),
                                    BrowserEffigy.staticFactory);
                        } else {
                            try {
                                configuration.openModel(newURL, newURL,
                                        newURL.toExternalForm());
                            } catch (IOException ex) {
                                // Try searching in the classpath in case the event description
                                // starts with $CLASSPATH.
                                // See http://bugzilla.ecoinformatics.org/show_bug.cgi?id=5194
                                URL eventURL = null;
                                String eventDescription = event
                                        .getDescription();
                                try {
                                    eventURL = FileUtilities.nameToURL(
                                            eventDescription, null, null);
                                    if (eventURL == null) {
                                        throw new NullPointerException(
                                                "Could not find \""
                                                        + eventDescription
                                                        + "\"");
                                    }
                                    configuration.openModel(eventURL, eventURL,
                                            eventURL.toExternalForm());
                                } catch (Throwable throwable) {
                                    if (eventDescription.indexOf(":/") == -1
                                            || eventDescription.startsWith("/")) {
                                        URL eventURL2 = null;
                                        try {
                                            // Try in the $CLASSPATH.
                                            // One test is to view the docs in PNDirector from the website
                                            // (no local docs) and then try to follow the links to other models.
                                            if (eventDescription
                                                    .startsWith("/")) {
                                                eventDescription = eventDescription
                                                        .substring(1);
                                            }
                                            String classpathEventDescription = "$CLASSPATH/"
                                                    + eventDescription;
                                            eventURL2 = FileUtilities
                                                    .nameToURL(
                                                            classpathEventDescription,
                                                            null, null);
                                            if (eventURL2 == null) {
                                                throw new NullPointerException(
                                                        "Could not find \""
                                                                + classpathEventDescription
                                                                + "\"");
                                            }
                                            configuration.openModel(eventURL2,
                                                    eventURL2,
                                                    eventURL2.toExternalForm());
                                        } catch (Throwable throwable2) {
                                            IOException exception = new IOException(
                                                    "Failed to find " + newURL
                                                    + ", also tried\n "
                                                    + eventURL
                                                    + " and\n"
                                                    + eventURL2);
                                            exception.initCause(ex);
                                            throw exception;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        // If there is no configuration,
                        // open in the same window.
                        pane.setPage(newURL);
                    }
                }
            } catch (Exception ex) {
                MessageHandler.error("Hyperlink reference failed", ex);
            }
        }
    }

    // FIXME: This should be handled in Top...

    /** Print the documentation to a printer.  The documentation will be
     *  scaled to fit the width of the paper, growing to as many pages as
     *  is necessary.
     *  @param graphics The context into which the page is drawn.
     *  @param format The size and orientation of the page being drawn.
     *  @param index The zero based index of the page to be drawn.
     *  @return PAGE_EXISTS if the page is rendered successfully, or
     *   NO_SUCH_PAGE if pageIndex specifies a non-existent page.
     *  @exception PrinterException If the print job is terminated.
     */
    @Override
    public int print(Graphics graphics, PageFormat format, int index)
            throws PrinterException {
        Dimension dimension = pane.getSize();

        // How much do we have to scale the width?
        double scale = format.getImageableWidth() / dimension.getWidth();
        double scaledHeight = dimension.getHeight() * scale;
        int lastPage = (int) (scaledHeight / format.getImageableHeight());

        // If we're off the end, then we're done.
        if (index > lastPage) {
            return Printable.NO_SUCH_PAGE;
        }

        AffineTransform at = new AffineTransform();
        at.translate((int) format.getImageableX(), (int) format.getImageableY());
        at.translate(0, -(format.getImageableHeight() * index));
        at.scale(scale, scale);

        ((Graphics2D) graphics).transform(at);

        pane.paint(graphics);
        return Printable.PAGE_EXISTS;
    }

    /** Set the base URL for relative accesses.
     *  @param base The base for relative hyperlink references.
     */
    public void setBase(URL base) {
        _base = base;
    }

    /** Set the page displayed by this viewer to be that given by the
     *  specified URL.
     *  @param page The location of the documentation.
     *  @exception IOException If the page cannot be read.
     *  @see #getPage()
     */
    public void setPage(URL page) throws IOException {
        URL jarURL = ClassUtilities.jarURLEntryResource(page.toString());
        if (jarURL != null) {
            // Under Java 1.7, JEditorPane.setPage() handles jar urls
            // differently.  In Java 1.6, setPage() would correctly open
            // jar:file:/Users/cxh/ptII/ptolemy/ptsupport.jar!/doc/mainVergilPtiny.htm
            // even though doc/MainVergilPtiny.htm is in doc/docConfig.jar,
            // not ptsupport.jar.  So, we look up the jar URL.
            // See http://bugzilla.ecoinformatics.org/show_bug.cgi?id=5508
            page = jarURL;
        }
        pane.setPage(page);
    }

    /** Override the base class to set the size of the scroll pane.
     *  Regrettably, this is necessary because swing packers ignore
     *  the specified size of a container. If this is not called in
     *  the AWT event thread, then execution is deferred and executed
     *  in that thread.
     *  @param width The width of the scroll pane.
     *  @param height The height of the scroll pane.
     */
    @Override
    public void setSize(final int width, final int height) {
        Runnable doSet = new Runnable() {
            @Override
            public void run() {
                _setScrollerSize(width, height);
                HTMLViewer.super.setSize(width, height);
            }
        };

        Top.deferIfNecessary(doSet);
    }

    /** Set the text displayed by this viewer.
     *  @param text The text to display.
     */
    public void setText(String text) {
        pane.setText(text);
    }

    ///////////////////////////////////////////////////////////////////
    ////                         public variables                  ////

    /** The text pane. */
    public JEditorPane pane = new JEditorPane();

    ///////////////////////////////////////////////////////////////////
    ////                         protected methods                 ////

    /** Add the main content pane (for HTML).
     */
    protected void _addMainPane() {
        // Default, which can be overridden by calling setSize().
        _scroller.setPreferredSize(new Dimension(800, 600));
        getContentPane().add(_scroller);
    }

    /** Set the scroller size.
     *  @param width The width.
     *  @param height The width.
     */
    protected void _setScrollerSize(final int width, final int height) {
        _scroller.setPreferredSize(new Dimension(width, height));
        _scroller.setSize(new Dimension(width, height));
    }

    /** Write the model to the specified file.  Note that this does not
     *  defer to the effigy.
     *  @param file The file to write to.
     *  @exception IOException If the write fails.
     */
    @Override
    protected void _writeFile(File file) throws IOException {
        java.io.FileWriter fileWriter = null;

        try {
            fileWriter = new java.io.FileWriter(file);
            fileWriter.write(pane.getText());
        } finally {
            if (fileWriter != null) {
                fileWriter.close();
            }
        }
    }

    ///////////////////////////////////////////////////////////////////
    ////                         protected variables               ////

    /** The main scroll pane. */
    protected JScrollPane _scroller;

    ///////////////////////////////////////////////////////////////////
    ////                         private methods                   ////

    /** Initialize the HTMLViewer.
     */
    private void _init() {
        getContentPane().setLayout(
                new BoxLayout(getContentPane(), BoxLayout.Y_AXIS));
        pane.setContentType("text/html");
        pane.setEditable(false);
        pane.addHyperlinkListener(this);

        if (_styleSheetURL != null) {
            // If _styleSheetURL is non-null, we set the style sheet
            // once and only once.  If try to do this in a static initializer,
            // then the styles are wrong.
            HTMLDocument doc = (HTMLDocument) pane.getDocument();
            StyleSheet styleSheet = doc.getStyleSheet();
            styleSheet.importStyleSheet(_styleSheetURL);
            if (_HTMLEditorKit == null) {
                _HTMLEditorKit = new HTMLEditorKit();
            }
            _HTMLEditorKit.setStyleSheet(styleSheet);
            _styleSheetURL = null;
        }

        // http://mindprod.com/jgloss/antialiasing.html says that in
        // java 1.5, this will turn on anti-aliased fonts
        try {
            // We use reflection so that this compiles everywhere.
            Class swingUtilities = Class
                    .forName("com.sun.java.swing.SwingUtilities2");
            Field propertyField = swingUtilities
                    .getDeclaredField("AA_TEXT_PROPERTY_KEY");
            pane.putClientProperty(propertyField.get(null), Boolean.TRUE);
        } catch (Throwable ex) {
            // Ignore, we just wont have anti-aliased fonts then.
        }

        _scroller = new JScrollPane(pane);
        _addMainPane();
    }

    ///////////////////////////////////////////////////////////////////
    ////                         private variables                 ////

    /** The base as specified by setBase(). */
    private URL _base;

    /** The HTMLEditorKit associated with this viewer. */
    private static HTMLEditorKit _HTMLEditorKit;

    /** The url that refers to $PTII/doc/default.css. */
    private static URL _styleSheetURL;

    static {
        try {
            Class refClass = Class.forName("ptolemy.kernel.util.NamedObj");
            _styleSheetURL = refClass.getClassLoader().getResource(
                    "doc/default.css");
        } catch (Throwable ex) {
            ex.printStackTrace();
            // Ignore, we just use the wrong style sheets.
        }

    }

    //     static {
    //         try {
    //             // We might be in the Swing Event thread, so
    //             // Thread.currentThread().getContextClassLoader()
    //             // .getResource(entry) probably will not work.
    //             Class refClass = Class.forName("ptolemy.kernel.util.NamedObj");
    //             URL styleSheetURL = refClass.getClassLoader()
    //                 .getResource("doc/default.css");
    //             if (styleSheetURL != null) {
    //                 System.out.println("HTMLViewer: reading stylesheet "
    //                         + styleSheetURL + "Instead of " + HTMLEditorKit.DEFAULT_CSS);

    //                 StyleSheet styleSheet = htmlEditorKit.getStyleSheet();
    //                 styleSheet.importStyleSheet(styleSheetURL);
    //                 htmlEditorKit.setStyleSheet(styleSheet);
    //             } else {
    //                 System.out.println("Failed to read doc/default.css, so "
    //                         + " the wrong style sheets will be used.");
    //             }
    //         } catch (Throwable ex) {
    //             // Ignore, we just use the wrong style sheets.
    //             ex.printStackTrace();
    //         }
    //    }
}
