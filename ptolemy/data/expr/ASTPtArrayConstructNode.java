/* ASTPtArrayConstructNode represents array construction in the parse tree.

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


 Created : December 2000

 */
package ptolemy.data.expr;

import ptolemy.kernel.util.IllegalActionException;

//////////////////////////////////////////////////////////////////////////
//// ASTPtArrayConstructNode

/**
 The parse tree created from the expression string consists of a
 hierarchy of node objects. This class represents array construction using
 the following syntax: <code>{"a", "b"}</code>.

 @author Xiaojun Liu
 @version $Id: ASTPtArrayConstructNode.java 70398 2014-10-22 23:44:32Z cxh $
 @since Ptolemy II 1.0
 @Pt.ProposedRating Yellow (liuxj)
 @Pt.AcceptedRating Red (cxh)
 @see ptolemy.data.expr.ASTPtRootNode
 @see ptolemy.data.expr.PtParser
 @see ptolemy.data.Token
 */
public class ASTPtArrayConstructNode extends ASTPtRootNode {
    public ASTPtArrayConstructNode(int id) {
        super(id);
    }

    public ASTPtArrayConstructNode(PtParser p, int id) {
        super(p, id);
    }

    /** Traverse this node with the given visitor.
     */
    @Override
    public void visit(ParseTreeVisitor visitor) throws IllegalActionException {
        visitor.visitArrayConstructNode(this);
    }
}
