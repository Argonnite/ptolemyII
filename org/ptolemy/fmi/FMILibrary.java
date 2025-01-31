/* Functional Mock-up Interface (FMI) event information.

   Copyright (c) 2012-2015 The Regents of the University of California.
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

package org.ptolemy.fmi;

import com.sun.jna.Callback;
import com.sun.jna.Library;
import com.sun.jna.Pointer;

/**
 * A Java Native Access (JNA) Wrapper for a Functional Mock-up Unit
 * shared library.
 *
 * <p>This file is based on a file that was autogenerated by
 * <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br> a tool
 * written by <a href="http://ochafik.com/">Olivier Chafik</a> that
 * <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses
 * a few opensource projects.</a>.</p>
 *
 * @author Christopher Brooks
@version $Id: FMILibrary.java 72874 2015-07-26 21:01:52Z cxh $
@since Ptolemy II 10.0
 * @version $Id: FMILibrary.java 72874 2015-07-26 21:01:52Z cxh $
 * @Pt.ProposedRating Red (cxh)
 * @Pt.AcceptedRating Red (cxh)
 */
public interface FMILibrary extends Library {

    /**
     * An enumeration of status values returned by fmi*() methods.
     */
    public static interface FMIStatus {
        /** The operation completed successfully. */
        public static final int fmiOK = 0;

        /** The operation had a problem, but the computation may
         *  continue.  The logger was called with further information.
         */
        public static final int fmiWarning = 1;

        /** Discard the current data and try again with a smaller
         *  step size.  Only certain methods can return this
         *  value, see the FMI documentation for details.
         */
        public static final int fmiDiscard = 2;

        /** The operation had a problem and fmiFreeModelInstance()
         *  must be called.
         */
        public static final int fmiError = 3;

        /** All model instances are corrupted.  No fmi*() methods
         *  may be called.
         */
        public static final int fmiFatal = 4;

        /** The slave is still executing, but has returned.
         */
        public static final int fmiPending = 5;
    };

    /**
     * An enumeration of status information returned by a slave.
     */
    public static interface FMIStatusKind {
        /** If fmiDoStep() returns fmiPending, then the master must
         * call fmiGetStatus(..., fmiDoStepStatus) to determine if the
         * slave has finished.
         */
        public static final int fmiDoStepStatus = 0;

        /** If fmiDoStep() returns fmiPending, then
         *  fmiGetStringStatus(..., fmiPendingStatus,...) can be called
         *  to get the status of the asynchronously executing
         *  fmiDoStep().
         */
        public static final int fmiPendingStatus = 1;

        /** If fmiDoStep() returns fmiDiscard, then calling
         *  fmiGetRealStatus(..., fmiLastSuccessfulTime,...)
         *  will return the time the last communication step
         *  was successfully computed.
         */
        public static final int fmiLastSuccessfulTime = 2;
    };

    /** A interface for the fmiCallbackLogger() function.
     *
     *  <p>Derived classes such as FMICallbackFunctions have a static classes
     *  that extend this interface and implements Structure.ByReference
     *  or Structure.ByValue.</p>
     *
     *  <p>For details about how Callbacks work in JNA, see
     *  <a href="http://twall.github.com/jna/3.4.0/javadoc/overview-summary.html#callbacks">http://twall.github.com/jna/3.4.0/javadoc/overview-summary.html#callbacks</a>.
     */
    public interface FMICallbackLogger extends Callback {
        /** Invoke the fmiCallbackLogger() function.
         *  @param fmiComponent The fmiComponent
         *  @param instanceName The name of the instance.
         *  @param status One of FMIStatus.
         *  @param category The category of the message, typically
         *  defined by the tool that created the fmu.
         *  @param message The printf style format string
         */
        void apply(Pointer fmiComponent, String instanceName, int status,
                String category, String message
        /*, Pointer*//*...*//*parameters*/);
    };

    /** A callback for the fmiCallbackAllocateMemory() function.
     *  See the documentation for FMICallbackLogger above for details.
     */
    public interface FMICallbackAllocateMemory extends Callback {
        /** Invoke the fmiCallbackAllocateMemory() function.
         *  Each byte of the allocated memory should be set to 0.
         *  @param numberOfObjects The number of objects to be allocated.
         *  @param size The size of each object to be allocated.
         *  @return The allocated memory.
         */
        Pointer apply(NativeSizeT numberOfObjects, NativeSizeT size);
    };

    /** A callback for the fmiCallbackFreeMemory() function.
     *  See the documentation for FMICallbackLogger above for details.
     */
    public interface FMICallbackFreeMemory extends Callback {
        /** Free the object.
         *  In Java, the Memory.finalize() method will free
         *  up memory for you, so this method is a no-op.
         *  @param object The object to be freed.  If the object
         *  parameter is null, then take no action.
         */
        void apply(Pointer object);
    };

    /** A callback for the fmiStepFinished() method.
     *  This method is optional. If present, it signals that
     *  the computation of the communication step has completed.
     *  See the documentation for FMICallbackLogger above for details.
     */
    public interface FMIStepFinished extends Callback {
        /** The step has finished.
         *  @param fmiComponent The fmiComponent.
         *  @param status One of FMIStatus.
         */
        void apply(Pointer fmiComponent, int status);
    };
}
