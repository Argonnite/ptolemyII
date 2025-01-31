# Makefile for Nashorn-based Ptolemy II JavaScript modules
#
# @Authors: Christopher Brooks, based on a file by Thomas M. Parks
#
# @Version: $Id: makefile 73606 2015-10-05 21:50:53Z cxh $
#
# @Copyright (c) 2014-2015 The Regents of the University of California.
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

ME =		ptolemy/actor/lib/jjs/modules

# PTBROWSER_DIR is set to browser if the Vertx jars are found by configure.
# PTCAMERAS_DIR is set to cameras if the webcam-capture*.jar and other jars are found by configure.
# PTEVENTBUS_DIR is set to eventbus if the Vertx jars are found by configure.
# PTHTTPCLIENT_DIR is set to eventbus if the Vertx jars are found by configure.
# PTIMUSENSOR_DIR is set to IMUSensor if the Java Communications API (RXTX) jars are found by configure.
# PTPAHO_MQTT_DIR is set to localStorage if the $PTII/lib/org.eclipse.paho.client.mqttv3.jar is found by configure.
# PTVERTXEVENTBUS_DIR is set to vertxEventBus if the Vertx jars are found by configure.
# PTWEBSOCKET_DIR is set to webSocket if the Vertx jars are found by configure.
DIRS = 		audio $(PTBROWSER_DIR) $(PTCAMERAS_DIR) contextAware contextAwareTest discovery dsp $(PTEVENTBUS_DIR) $(PTHTTPCLIENT_DIR) $(PTIMUSENSOR_DIR) localStorage mapManager motionDetector $(PTPAHO_MQTT_DIRS) objectAssign shell udpSocket $(PTVERTXEVENTBUS_DIR) $(PTWEBSOCKET_DIR)

# Root of the Java directory
ROOT =		../../../../..

CLASSPATH =	$(ROOT)$(CLASSPATHSEPARATOR)$(PTJAVASCRIPT_JAR)$(CLASSPATHSEPARATOR)$(PTOAUTHCLIENT_JAR)$(CLASSPATHSEPARATOR)$(PTOAUTHCOMMON_JAR)$(CLASSPATHSEPARATOR)$(PTSOCKETIO_JAR)$(CLASSPATHSEPARATOR)$(PTVERTX_JARS)

# Get configuration info
CONFIG =	$(ROOT)/mk/ptII.mk
include $(CONFIG)

# Used to build jar files
PTPACKAGE = 	modules
#PTCLASSJAR = 	$(PTPACKAGE).jar

PTCLASSALLJAR = $(PTPACKAGE).jar

# Include the .class files from these jars in PTCLASSALLJAR
PTCLASSALLJARS =

# Don't include these possibly optional files.
#	localStorage/localStorage.jar
#	mqtt/mqtt.jar
#	vertxEventBus/vertxEventBus.jar
#	webSocket/webSocket.jar

# Keep this list alphabetized.
JSRCS = \
	VertxHelperBase.java

OTHER_FILES_TO_BE_JARED =

EXTRA_SRCS =	$(JSRCS) $(OTHER_FILES_TO_BE_JARED)

# Sources that may or may not be present, but if they are present, we don't
# want make checkjunk to barf on them.
MISC_FILES =	IMUSensor aprilTags audio browser cameras discovery dsp eventbus httpClient imageFilters localStorage mapManager motionDetector mqtt objectAssign shell udpSocket vertxEventBus webSocket #test

# make checkjunk will not report OPTIONAL_FILES as trash
# make distclean removes OPTIONAL_FILES
OPTIONAL_FILES = \
	demo \
	$(PTCLASSJAR) 

JCLASS = $(JSRCS:%.java=%.class)


all: suball #jclass
install: subjars jars #jclass

# Get the rest of the rules
include $(ROOT)/mk/ptcommon.mk
