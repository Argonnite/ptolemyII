/* Utilities used to manipulate classes

 Copyright (c) 2003-2014 The Regents of the University of California.
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
package ptolemy.util;

import java.io.File;
import java.io.IOException;
import java.net.JarURLConnection;
import java.net.URL;
import java.util.Enumeration;
import java.util.LinkedList;
import java.util.List;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

///////////////////////////////////////////////////////////////////
//// ClassUtilities

/**
 A collection of utilities for manipulating classes.
 These utilities do not depend on any other ptolemy.* packages.


 @author Christopher Hylands
 @version $Id: ClassUtilities.java 73263 2015-08-27 19:50:05Z eal $
 @since Ptolemy II 4.0
 @Pt.ProposedRating Green (cxh)
 @Pt.AcceptedRating Green (cxh)
 */
public class ClassUtilities {
    /** Instances of this class cannot be created.
     */
    private ClassUtilities() {
    }

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Return the directories in a jar URI, relative to the jar entry,
     *  if any.   .
     *  Jar URLS have several forms, the most common being:
     *  <code>jar:file:///foo/bar.jar/!/bif/baz</code>, which means that
     *  the jar file /foo/bar.jar has a directory or file name bif/baz.
     *  If such a file is passed to this method, then any directories
     *  in the jar file directory bif/baz will be returned.
     *  @param jarURL The Jar URL for which we are to look for directories.
     *  @return An list of Strings that name the directories
     *  @exception IOException If opening the connection fails or if
     *  getting the jar file from the connection fails
     */
    public static List jarURLDirectories(URL jarURL) throws IOException {
        List directories = new LinkedList();
        JarURLConnection connection = (JarURLConnection) jarURL
                .openConnection();
        String jarEntryName = connection.getEntryName();
        if (jarEntryName.endsWith("/")) {
            jarEntryName = jarEntryName.substring(0, jarEntryName.length() - 1);
        }
        JarFile jarFile = connection.getJarFile();
        Enumeration entries = jarFile.entries();
        while (entries.hasMoreElements()) {
            JarEntry entry = (JarEntry) entries.nextElement();
            String name = entry.getName();
            int jarEntryIndex = name.indexOf(jarEntryName + "/");
            int jarEntrySlashIndex = jarEntryIndex + jarEntryName.length() + 1;

            int nextSlashIndex = name.indexOf("/", jarEntrySlashIndex);
            int lastSlashIndex = name.indexOf("/", jarEntrySlashIndex);

            if (jarEntryIndex > -1 && jarEntrySlashIndex > -1
                    && nextSlashIndex > -1 && nextSlashIndex == lastSlashIndex
                    && nextSlashIndex == name.length() - 1
                    && entry.isDirectory()) {
                directories.add(name);
            }
        }
        return directories;
    }

    /** Lookup a jar URL and return the resource.

     *  A resource is a file such as a class file or image file that
     *  is found in the classpath.  A jar URL is a URL that refers to
     *  a resource in a jar file.  For example,
     *  <code>file://./foo.jar!/a/b/c.class</code> is a jar URL that
     *  refers to the <code>a/b/c.class</code> resource in
     *  <code>foo.jar</code>.  If this method is called with
     *  <code>file://./foo.jar!/a/b/c.class</code> then it will return
     *  <code>a/b/c.class</code> if <code>a/b/c.class</code> can be
     *  found as a resource in the class loader that loaded this class
     *  (ptolemy.util.ClassUtilities).  If the resource cannot be found,
     *  then an IOException is thrown. If the jarURLString parameter
     *  does not contain <code>!/</code>, then return null.
     *  Note that everything before the <code>!/</code> is removed before
     *  searching the classpath.
     *
     *  <p>This method is necessary because Web Start uses jar URL, and
     *  there are some cases where if we have a jar URL, then we may
     *  need to strip off the jar:<i>url</i>!/ part so that we can
     *  search for the {entry} as a resource.
     *
     *  @param jarURLString The string containing the jar URL.
     *  If no resource is found and the string contains a "#" then the text
     *  consisting of the # and the remaining text is removed and the shorter
     *  string is used as a search pattern.
     *  @return The resource, if any.  If the spec string does not
     *  contain <code>!/</code>, then return null.
     *  @exception IOException If this method cannot convert the specification
     *  to a URL.
     *  @see java.net.JarURLConnection
     */
    public static URL jarURLEntryResource(String jarURLString)
            throws IOException {
        // At first glance, it would appear that this method could appear
        // in specToURL(), but the problem is that specToURL() creates
        // a new URL with the spec, so it only does further checks if
        // the URL is malformed.  Unfortunately, in Web Start applications
        // the URL will often refer to a resource in another jar file,
        // which means that the jar url is not malformed, but there is
        // no resource by that name.  Probably specToURL() should return
        // the resource after calling new URL().
        int jarEntry = jarURLString.indexOf("!/");

        if (jarEntry == -1) {
            jarEntry = jarURLString.indexOf("!\\");

            if (jarEntry == -1) {
                return null;
            }
        }

        try {
            // !/ means that this could be in a jar file.
            String entry = jarURLString.substring(jarEntry + 2);

            // We might be in the Swing Event thread, so
            // Thread.currentThread().getContextClassLoader()
            // .getResource(entry) probably will not work.
            Class refClass = Class.forName("ptolemy.util.ClassUtilities");
            URL entryURL = refClass.getClassLoader().getResource(entry);
            if (entryURL == null && entry.indexOf("#") != -1) {
                // If entry contains a #, then strip it off and try again.
                entryURL = refClass.getClassLoader().getResource(
                        entry.substring(0, entry.indexOf("#")));
            }
            return entryURL;
        } catch (Exception ex) {
            // IOException constructor does not take a cause, so we add it.
            IOException ioException = new IOException("Cannot find \""
                    + jarURLString + "\".");
            ioException.initCause(ex);
            throw ioException;
        }
    }

    /** Lookup a URL in the classpath, but search up the classpath
     *  for directories named src.
     *  This method is useful for IDEs such as Eclipse where
     *  the default is to place .class files in a separate directory
     *  from the .java files.
     *
     *  <p>Before calling this method, call ClassLoader.getResource()
     *  because ClassLoader.getResource() is presumably faster.</p>
     *
     *  @param sourceURLString The string containing the URL.
     *  @return The resource, if any.  If the spec string does not
     *  contain <code>!/</code>, then return null.
     *  @exception IOException If this method cannot convert the specification
     *  to a URL.
     *  @see java.net.JarURLConnection
     */
    public static URL sourceResource(String sourceURLString) throws IOException {
        // FIXME: Maybe only allow relative paths?

        // Hmm.  Might be Eclipse, where sadly the
        // .class files are often in a separate directory
        // than the .java files.  So, we look at the CLASSPATH
        // and for each element that names a directory, traverse
        // the parents directories and look for adjacent directories
        // that contain a "src" directory.  For example if
        // the classpath contains "kepler/ptolemy/target/classes/",
        // then we will find kepler/ptolemy/src and return it
        // as a URL.

        // First time through, search each element of the CLASSPATH that names
        // a directory
        if (_sourceDirectories == null) {
            List<File> sourceDirectories = new LinkedList<File>();
            String classPath[] = StringUtilities.getProperty("java.class.path")
                    .split(StringUtilities.getProperty("path.separator"));
            for (String element : classPath) {
                File directory = new File(element);
                if (directory.isDirectory()) {
                    // We have a potential winner.
                    while (directory != null) {
                        File sourceDirectory = new File(directory, "src");
                        if (sourceDirectory.isDirectory()) {
                            sourceDirectories.add(sourceDirectory);
                            break;
                        }
                        directory = directory.getParentFile();
                    }
                }
            }
            // Avoid FindBugs: LI: Incorrect lazy initialization and update of static field.
            _sourceDirectories = sourceDirectories;
        }

        // Search _sourceDirectories for sourceURLString
        for (File sourceDirectory : _sourceDirectories) {
            File sourceFile = new File(sourceDirectory, sourceURLString);
            if (sourceFile.exists()) {
                return sourceFile.getCanonicalFile().toURI().toURL();
            }
        }
        return null;
    }

    /** Get the resource.
     *  If the current thread has a non-null context class loader,
     *  then use it to get the resource.  Othewise, get the
     *  NamedObj class and use that to get the resource.
     *  This is necessary because Thread.currentThread() can return null.
     *  @param spec The string to be found as a resource.
     *  @return The URL
     */
    public static URL getResource(String spec) {
        URL url = null;
        // Unfortunately, Thread.currentThread().getContextClassLoader() can
        // return null.  This happened when
        // $CLASSPATH/ptolemy/actor/lib/vertx/demo/TokenTransmissionTime/Sender.xml
        // failed and subsequent calls to ConfigurationApplication.openModelOrEntity() would
        // fail because the configuration could not be found.
        // So, we have our own getResource() that handles this.

        ClassLoader classLoader = Thread.currentThread().getContextClassLoader();
        if (classLoader != null) {
            url = classLoader.getResource(spec);
        } else {
            classLoader = ClassLoader.getSystemClassLoader();
            if (classLoader != null) {
                url = classLoader.getResource(spec);
            } else {
                try {
                    Class refClass = Class.forName(
                            "ptolemy.util.ClassUtilities");
                    url = refClass.getClassLoader().getResource(spec);
                } catch (Exception ex) {
                    throw new RuntimeException("Failed to get system class loader"
                            + " and failed to get the Class for ClassUtilities", ex);
                }
            }
        }
        return url;
    }

    /** Given a dot separated classname, return the jar file or directory
     *  where the class can be found.
     *  @param necessaryClass  The dot separated class name, for example
     *  "ptolemy.util.ClassUtilities"
     *  @return If the class can be found as a resource, return the
     *  directory or jar file where the necessary class can be found.
     *  otherwise, return null.  If the resource is found in a directory,
     *  then the return value will always have forward slashes, it will
     *  never use backslashes.
     */
    public static String lookupClassAsResource(String necessaryClass) {
        // This method is called from copernicus.kernel.GeneratorAttribute
        // and actor.lib.python.PythonScript.  We moved it here
        // to avoid dependencies.
        String necessaryResource = StringUtilities.substitute(necessaryClass,
                ".", "/") + ".class";

        URL necessaryURL = ClassUtilities.getResource(necessaryResource);

        if (necessaryURL == null) {
            necessaryResource = StringUtilities.substitute(necessaryClass, ".",
                    "/") + ".xml";
            necessaryURL = ClassUtilities.getResource(necessaryResource);
        }
        if (necessaryURL != null) {
            String resourceResults = necessaryURL.getFile();

            // Strip off the file:/ and the necessaryResource.
            if (resourceResults.startsWith("file:/")) {
                resourceResults = resourceResults.substring(6);
            }

            // Strip off the name of the resource we were looking for
            // so that we are left with the directory or jar file
            // it is in
            resourceResults = resourceResults.substring(0,
                    resourceResults.length() - necessaryResource.length());

            // Strip off the trailing !/
            if (resourceResults.endsWith("!/")) {
                resourceResults = resourceResults.substring(0,
                        resourceResults.length() - 2);
            }

            // Unfortunately, under Windows, URL.getFile() may
            // return things like /c:/ptII, so we create a new
            // File and get its path, which will return c:\ptII
            File resourceFile = new File(resourceResults);

            // Convert backslashes
            String sanitizedResourceName = StringUtilities.substitute(
                    resourceFile.getPath(), "\\", "/");
            return sanitizedResourceName;
        }

        return null;
    }

    /** A list of directories that end with "src" that are found in
     *  in the paths of individual elements in the classpath.
     */
    private static List<File> _sourceDirectories = null;
}
