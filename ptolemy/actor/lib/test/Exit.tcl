# Test Exit
#
# @Author: Christopher Brooks
#
# @Version: $Id: Exit.tcl 64744 2012-10-01 22:51:43Z cxh $
#
# @Copyright (c) 2004-2012 The Regents of the University of California.
# All rights reserved.
#
# Permission is hereby granted, without written agreement and without
# license or royalty fees, to use, copy, modify, and distribute this
# software and its documentation for any purpose, provided that the
# above copyright notice and the following two paragraphs appear in all
# copies of this software.
#
# IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY
# FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
# ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF
# THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
# THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
# INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE
# PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
# CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
# ENHANCEMENTS, OR MODIFICATIONS.
#
# 						PT_COPYRIGHT_VERSION_2
# 						COPYRIGHTENDKEY
#######################################################################

# Ptolemy II test bed, see $PTII/doc/coding/testing.html for more information.

# Load up the test definitions.
if {[string compare test [info procs test]] == 1} then {
    source testDefs.tcl
} {}

######################################################################
####
#
test Exit-1.1 {} {
    # StringUtilities.exit() checks this property.
    java::call System setProperty ptolemy.ptII.doNotExit ""
    # The Manager uses this property to help us test the Exit actor.
    java::call System setProperty ptolemy.ptII.exitAfterWrapup true

    #puts "Exit.tcl: properties:"
    #set properties [java::call System getProperties]
    #puts [$properties toString]

    puts "Exit.tcl: this will print a message about Manager.exitAfterWrapup, which can be ignored."
    catch {java::new ptolemy.actor.gui.MoMLSimpleApplication Exit.xml} errMsg
    java::call System setProperty ptolemy.ptII.doNotExit true
    list $errMsg
} {{java.lang.RuntimeException: Normally, we would exit here because Manager.exitAfterWrapup() was called.  However, because the ptolemy.ptII.exitAfterWrapup property is set, we throw this exception instead.}}

