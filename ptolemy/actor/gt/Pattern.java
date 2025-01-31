/* The pattern of a transformation rule.

@Copyright (c) 2007-2009 The Regents of the University of California.
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

package ptolemy.actor.gt;

import ptolemy.kernel.CompositeEntity;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;

/**
 The pattern of a transformation rule.

 @author Thomas Huining Feng
 @version $Id: Pattern.java 57040 2010-01-27 20:52:32Z cxh $
 @since Ptolemy II 6.1
 @Pt.ProposedRating Yellow (tfeng)
 @Pt.AcceptedRating Red (tfeng)
 */
public class Pattern extends CompositeActorMatcher {

    /** Construct an atomic actor matcher to be either contained in the pattern
     *  of a {@link TransformationRule} or in the replacement.
     *
     *  @param container The proposed container of this matcher.
     *  @param name The name of this matcher.
     *  @exception IllegalActionException If this actor cannot be contained by
     *   the proposed container.
     *  @exception NameDuplicationException If the name coincides with an entity
     *   already in the container.
     */
    public Pattern(CompositeEntity container, String name)
            throws NameDuplicationException, IllegalActionException {
        super(container, name);
        setClassName("ptolemy.actor.gt.Pattern");
    }
}
