/* An actor that repeats each input sample a specified number of times.

 Copyright (c) 1997-2014 The Regents of the University of California.
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
package ptolemy.domains.sdf.lib;

import ptolemy.actor.parameters.PortParameter;
import ptolemy.data.IntToken;
import ptolemy.data.Token;
import ptolemy.data.expr.Parameter;
import ptolemy.kernel.CompositeEntity;
import ptolemy.kernel.util.Attribute;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;

///////////////////////////////////////////////////////////////////
//// Repeat

/**
 An actor that repeats a block of input tokens the specified number of times
 on the output.  On each firing, it reads <i>blockSize</i> tokens
 and repeats each block <i>numberOfTimes</i> times
 on the output.  Note that this causes a sample rate increase by
 a factor of <i>numberOfTimes</i>,
 and hence affects the number of invocations of downstream actors.
 If the input does not have enough tokens, then this actor does
 nothing. If <i>blockSize</i> or <i>numberOfTimes</i> is zero,
 then it produces no outputs.

 @author Shankar Rao, Steve Neuendorffer
 @version $Id: Repeat.java 69607 2014-07-30 17:07:26Z cxh $
 @since Ptolemy II 1.0
 @Pt.ProposedRating Yellow (neuendor)
 @Pt.AcceptedRating Yellow (neuendor)
 */
public class Repeat extends SDFTransformer {
    /** Construct an actor in the specified container with the specified
     *  name.
     *  @param container The container.
     *  @param name The name of this Repeat actor within the container.
     *  @exception IllegalActionException If the actor cannot be contained
     *   by the proposed container.
     *  @exception NameDuplicationException If the name coincides with
     *   an actor already in the container.
     */
    public Repeat(CompositeEntity container, String name)
            throws IllegalActionException, NameDuplicationException {
        super(container, name);

        // parameters
        numberOfTimes = new PortParameter(this, "numberOfTimes",
                new IntToken(2));

        blockSize = new Parameter(this, "blockSize", new IntToken(1));

        input_tokenConsumptionRate.setExpression("blockSize");
        output_tokenProductionRate.setExpression("numberOfTimes*blockSize");
    }

    ///////////////////////////////////////////////////////////////////
    ////                     ports and parameters                  ////

    /** The repetition factor.  It is of type integer and has a default
     *  value of 2.  It must be greater than zero.
     */
    public PortParameter numberOfTimes;

    /** The number of tokens in a block.  It is of type integer and has a
     *  default value of 1.  It must be greater than zero.
     */
    public Parameter blockSize;

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Ensure that the numberOfTimes parameter and the blockSize
     *  parameter are both positive.
     *  @param attribute The attribute that has changed.
     *  @exception IllegalActionException If the parameters are out of range.
     */
    @Override
    public void attributeChanged(Attribute attribute)
            throws IllegalActionException {

        if (attribute == numberOfTimes || attribute == blockSize) {
            int repetitions = ((IntToken) numberOfTimes.getToken()).intValue();
            int count = ((IntToken) blockSize.getToken()).intValue();

            if (repetitions < 0) {
                throw new IllegalActionException(numberOfTimes,
                        "The value of numberOfTimes must be positive, but "
                                + "was set to " + repetitions);
            }

            if (count < 1) {
                throw new IllegalActionException(blockSize,
                        "The value of blockSize must be positive, but "
                                + "was set to " + count);
            }
        } else {
            super.attributeChanged(attribute);
        }
    }

    /** Consume <i>blockSize</i> input tokens from the input port.
     *  Produce <i>blockSize*numberOfTimes</i>
     *  tokens on the output port, consisting of <i>numberOfTimes</i>
     *  repetitions of the input.  For example, if <i>blockSize</i> = 3 and
     *  <i>numberOfTimes</i> = 2, then on the following input:<br>
     *  <pre>  1 2 3 4 5 6</pre><br>
     *  two invocations of this method will send the following output:<br>
     *  <pre>  1 2 3 1 2 3 4 5 6 4 5 6</pre><br>
     *  @exception IllegalActionException If there is no director.
     */
    @Override
    public void fire() throws IllegalActionException {
        super.fire();

        numberOfTimes.update();
        int repetitions = ((IntToken) numberOfTimes.getToken()).intValue();
        int count = ((IntToken) blockSize.getToken()).intValue();
        if (input.hasToken(0, count)) {
            Token[] inputBlock = input.get(0, count);

            for (int i = 0; i < repetitions; i += 1) {
                output.send(0, inputBlock, count);
            }
        }
    }
}
