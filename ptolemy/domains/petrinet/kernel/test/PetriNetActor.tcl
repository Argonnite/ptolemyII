# Tests for the PetriNetActor class
#
# @Author: Christopher Brooks
#
# @Version: $Id: PetriNetActor.tcl 40319 2005-12-29 17:45:44Z cxh $
#
# @Copyright (c) 2005 The Regents of the University of California.
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

# Ptolemy II bed, see /users/cxh/ptII/doc/coding/testing.html for more information.

# Load up the test definitions.
if {[string compare test [info procs test]] == 1} then {
    source testDefs.tcl
} {}

# Uncomment this to get a full report, or set in your Tcl shell window.
# set VERBOSE 1

######################################################################
####
#
test PetriNetActor-2.1 {Constructor tests} {
    set w [java::new ptolemy.kernel.util.Workspace W]
    set top [java::new ptolemy.kernel.CompositeEntity]
    set actor1 [java::new ptolemy.domains.petrinet.kernel.PetriNetActor]
    set actor2 [java::new ptolemy.domains.petrinet.kernel.PetriNetActor $w]
    set actor3 [java::new ptolemy.domains.petrinet.kernel.PetriNetActor \
	$top MyActor3]
    list [$actor1 getClassName] [$actor2 getClassName] [$actor3 getClassName]
} {ptolemy.domains.petrinet.kernel.PetriNetActor ptolemy.domains.petrinet.kernel.PetriNetActor ptolemy.domains.petrinet.kernel.PetriNetActor}
