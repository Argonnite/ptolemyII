# Test GenericCodeGenerator
#
# @Author: Christopher Brooks
#
# @Version: $Id: GenericCodeGenerator.tcl 72874 2015-07-26 21:01:52Z cxh $
#
# @Copyright (c) 2009-2015 The Regents of the University of California.
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

if {[info procs sdfModel] == "" } then {
    source [file join $PTII util testsuite models.tcl]
}

if {[info procs jdkCapture] == "" } then {
    source [file join $PTII util testsuite jdktools.tcl]
}

#####
test GenericCodeGenerator-1.1 {Instantiate a GenericCodeGenerator, call a few methods} {
    set model [sdfModel]
    set codeGenerator \
	    [java::new ptolemy.cg.kernel.generic.test.TestGenericCodeGenerator \
	    $model "myCodeGenerator"]

    # Call setCodeGenerator for complete code coverage, even though it
    # does not do anything.
    $codeGenerator setCodeGenerator $codeGenerator

    list \
	[$codeGenerator toString] \
	[$codeGenerator comment {This is a comment}] \
} {{ptolemy.cg.kernel.generic.test.TestGenericCodeGenerator {.top.myCodeGenerator}} {<TGCFThis is a commentTGCF>}}

test GenericCodeGenerator-1.1 {call attribute changed} {
     set toplevel1_1 [java::new ptolemy.actor.TypedCompositeActor]
     set myEmptyCodeGenerator [java::new ptolemy.cg.kernel.generic.test.TestGenericCodeGenerator $toplevel1_1 "myEmptyCodeGenerator"]
     set param [getParameter $myEmptyCodeGenerator generateInSubdirectory]
     $myEmptyCodeGenerator attributeChanged $param
     $myEmptyCodeGenerator setContainer [java::null]
 } {}

#####
test GenericCodeGenerator-2.1 {comment} {
    $codeGenerator comment "This is a comment"
} {<TGCFThis is a commentTGCF>}

#####
test GenericCodeGenerator-3.1 {createDecoratedAttributes} {
    # FIXME
} {}

#####
test GenericCodeGenerator-4.1 {generateCode()} {
    $codeGenerator generateCode
} {0}

#####
test GenericCodeGenerator-5.1 {generateCode(StringBuffer)} {
    set stringBuffer [java::new StringBuffer]
    set result [$codeGenerator {generateCode StringBuffer} $stringBuffer]
    list $result [$stringBuffer toString]
} {0 {}}

#####
test GenericCodeGenerator-6.1 {generateCode(String[])} {
} {}

#####
test GenericCodeGenerator-7.1 {generateCopyright()} {
    $codeGenerator generateCopyright
} {<TGCFGenerated by Ptolemy II (http://ptolemy.eecs.berkeley.edu)

Copyright (c) 2005-2015 The Regents of the University of California.
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
TGCF>}

#####
test GenericCodeGenerator-8.1 {setExecuteCommands, getExecuteCommands} {
    # Trivial test to increase code coverage.
    set executeCommands [java::new ptolemy.util.StreamExec]
    $codeGenerator setExecuteCommands $executeCommands
    set executeCommands2 [$codeGenerator getExecuteCommands]
    list [$executeCommands equals $executeCommands2]
} {1}

#####
test GenericCodeGenerator-9.1 {getCodeFileName} {
    # Trivial test to increase code coverage.
    regexp {/cg/} [$codeGenerator getCodeFileName] 
} {1}

#####

# generateCode(StringBuffer) is also tested in
# $PTII/ptolemy/codegen/c/domains/sdf/kernel/test/SDFDirector.tcl
# because the test relies on SDFDirector being built. 

test GenericCodeGenerator-12.1 {generateCode using actor/TypedCompositeActor.java} {

    ###################################################################
    # NOTE: DO NOT REMOVE THIS TEST
    # If you remove this test, then the corresponding method WILL NOT
    # be covered in the nightly build.
    # Yes, it is annoying to update the output because this checks
    # the output of the codegenerator against known good results.
    # However, if this test is not here, then the method in the base
    # class is not ever run, which is a no-no
    # An alternative design would be to make this class abstract,
    # which would make it slightly more difficult to test.	
    # -cxh 11/07
    ###################################################################

    # Set the generatorPackage parameter so we look in
    # $PTII/ptolemy/cg/kernel/generic/test/actor for TypedCompositeActor.java
    set generatorPackageParameter [java::cast  ptolemy.data.expr.StringParameter [$codeGenerator getAttribute generatorPackage]]
    $generatorPackageParameter setExpression ptolemy.cg.kernel.generic.test

    set code [java::new StringBuffer]
    $codeGenerator generateCode $code

    # The empty string is returned because the text is all comments.
    list [$code toString]
} {{}}

# main(String[]) is tested in
# $PTII/ptolemy/codegen/c/actor/lib/test/CodeGenerator2.tcl
# because the test relies on SDFDirector being built and actors being present.
test GenericCodeGenerator-13.1 {main -help} {

    set previousExitAfterWrapup \
	[java::call ptolemy.util.StringUtilities getProperty \
	     ptolemy.ptII.exitAfterWrapup]

    set args [java::new {String[]} 1  {-help}]
	java::call System setProperty ptolemy.ptII.exitAfterWrapup false
    jdkCapture {
	catch {
	    java::call ptolemy.cg.kernel.generic.test.TestGenericCodeGenerator main $args
	} errMsg
    } result1
    set args [java::new {String[]} 1  {-version}]
    jdkCapture {
	catch {
	    java::call ptolemy.cg.kernel.generic.test.TestGenericCodeGenerator main $args
	} errMsg2
    } result2
    java::call System setProperty ptolemy.ptII.exitAfterWrapup \
	previousExitAfterWrapup
    list $errMsg $result1 $errMsg2 [string range $result2 0 6]
} {{java.lang.Exception: Failed to parse "-help"} {Usage: ptcg [ options ] [file ...]

Options that take values:
 -codeDirectory         <directory in which to put code (default: $HOME/cg/. Other values: $CWD, $HOME, $PTII, $TMPDIR)>
 -dialect               <Use to distinguish between different implementations in the same package>
 -generatorDialect      <Same as dialect. Class naming convention: <Package><Dialect>CodeGenerator>
 -generatorPackage  <Java package of code generator, defaults to ptolemy.cg.kernel.generic.program.procedural.c>
 -generatorPackageList  <Semicolon or * separated list of Java packages to be searched for adapters>
 -language              <c|java|html (default: c)>
 -<parameter name>      <parameter value>
 -generateComment    true|false (default: true)
 -inline             true|false (default: false)
 -maximumLinesPerBlock <an integer, default: 2500>
 -measureTime        true|false (default: false)
 -run                true|false (default: true)
 -runCommand         <a string, default: make -f @modelName@.mk run>
 -variablesAsArrays  true|false (default:false)
 -verbosity          <an integer, try 1 or 10>, (default: 0)

Boolean flags:
 -help
 -generateInSubdirectory
 -version

 To get additional help, try -language java -help
} {java.lang.Exception: Failed to parse "-version"} Version}


