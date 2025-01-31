/*
 @Copyright (c) 2009-2011 The Regents of the University of California.
 All rights reserved.

 Permission is hereby granted, without written agreement and without
 license or royalty fees, to use, copy, modify, and distribute this
 software and its documentation for any purpose, provided that the
 above copyright notice and the following two paragraphs appear in all
 copies of this software.

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
package ptolemy.cg.adapter.generic.program.procedural.adapters.ptolemy.actor.lib;

//////////////////////////////////////////////////////////////////////////
//// Const

/**
 * A adapter class for ptolemy.actor.lib.Const.
 *
 * @author Bert Rodiers
 * @version $Id: Const.java 67784 2013-10-26 16:53:27Z cxh $
 * @since Ptolemy II 10.0
 * @Pt.ProposedRating Red (rodiers)
 * @Pt.AcceptedRating Red (rodiers)
 */
public class Const extends LimitedFiringSource {
    /**
     * Constructor method for the Const adapter.
     * @param actor the associated actor
     */
    public Const(ptolemy.actor.lib.Const actor) {
        super(actor);
    }
}
