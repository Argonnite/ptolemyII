/* Generate an occupancy grid from a PGM image.

   Copyright (c) 2014-2015 The Regents of the University of California.
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
package ptolemy.actor.lib.image;

import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

import ptolemy.actor.lib.Source;
import ptolemy.data.ArrayToken;
import ptolemy.data.IntToken;
import ptolemy.data.RecordToken;
import ptolemy.data.expr.FileParameter;
import ptolemy.data.expr.Parameter;
import ptolemy.data.Token;
import ptolemy.data.type.ArrayType;
import ptolemy.data.type.BaseType;
import ptolemy.data.type.RecordType;
import ptolemy.data.type.Type;
import ptolemy.kernel.CompositeEntity;
import ptolemy.kernel.util.Attribute;
import ptolemy.kernel.util.IllegalActionException;
import ptolemy.kernel.util.NameDuplicationException;

/** Read a PGM file and output it as an occupancy grid. Most ROS maps are represented as a portable bitmap
 * therefore this actor is a helper for reading a saved map scan. 
 *  @author Ilge Akkaya
 *  @version $Id: PGMReader.java 73491 2015-09-21 00:17:26Z ilgea $
 *  @since Ptolemy II 11.0
 *  @Pt.ProposedRating Red (ilgea)
 *  @Pt.AcceptedRating 
 *
 */
public class PGMReader extends Source {


    public PGMReader(CompositeEntity container, String name)
            throws IllegalActionException, NameDuplicationException {
        super(container, name); 

        fileOrURL = new FileParameter(this, "fileOrURL");

        levelMap = new Parameter(this, "levelMap");
        levelMap.setExpression("{}");
        levelMap.setTypeEquals(new ArrayType(BaseType.INT));
        String[] outputLabels = {"width","height","grid"};
        Type[] types = {BaseType.INT, BaseType.INT, new ArrayType(BaseType.INT)};
        output.setTypeEquals(new RecordType(outputLabels, types));
    }



    ///////////////////////////////////////////////////////////////////
    ////                     ports and parameters                  ////

    /** The file name or URL from which to read.  This is a string with
     *  any form accepted by File Attribute.
     *  @see FileParameter
     */
    public FileParameter fileOrURL; 

    /** A mapping between image input and output values to generate a quantized output. 
     * Set this parameter to empty array for no quantization. Empty array means no quantization*/
    public Parameter levelMap;

    @Override
    public void attributeChanged(Attribute attribute) throws IllegalActionException {
        if ( attribute == levelMap) {
            int length = ((ArrayToken) levelMap.getToken()).length();
            _quantize = true;
            if (length > 0) {
                _levels = new int[length];
                for (int i = 0 ; i < _levels.length; i ++ ) {
                    _levels[i] = ((IntToken)((ArrayToken)levelMap.getToken()).getElement(i)).intValue();
                }
            } else {
                _quantize = false;
            }
        } else {
            super.attributeChanged(attribute);
        }
    }
    @Override
    public boolean prefire() throws IllegalActionException {
        if (!super.prefire()) {
            return false;
        }
        try { 

            Scanner scan = new Scanner(new FileInputStream(fileOrURL.asFile()));
            scan.next(); // the magic number: used to determine the PGM format.
            _width = scan.nextInt();
            _height = scan.nextInt();
            scan.nextInt();  // max value
            scan.close();

            FileReader stream = new FileReader(fileOrURL.asFile()); 

            // skip header.
            for ( int i = 0 ; i < 4; i++) { 
                if (stream.read() == -1) {
                    return false;
                }
            }
            _grid = new int[_height*_width];

            for (int col = 0; col < _width; col++) { 
                for (int row = 0; row < _height; row++) {
                    int intVal = stream.read();
                    if (!_quantize) {
                        _grid[row*_width + col] = intVal; 
                    } else {
                        int index=0;
                        for (int i = 0; i < _levels.length; i ++) {
                            if (i==0 ) {
                                if (intVal < _levels[i]) {
                                    index = 0;
                                } else {
                                    continue;
                                }
                            } else if( intVal > _levels[i-1] && intVal <= _levels[i]) {
                                index = i;
                            } else if( intVal > _levels[i] && i >= _levels.length -1) {
                                index = i;
                            } 
                        }
                        _grid[row + col*_height] = _levels[index];   

                    }
                }
            } 
            stream.close();
        } catch (IOException e) {
            throw new IllegalActionException(this, e.getMessage());
        }




        return super.prefire(); 
    }

    /** Output the data read in the prefire.
     *  @exception IllegalActionException If there's no director.
     */
    @Override
    public void fire() throws IllegalActionException {
        super.fire();
        // convert grid to array token
        Token[] grid = new IntToken[_grid.length];
        for (int i = 0 ; i < _grid.length; i++) {
            grid[i] = new IntToken(_grid[i]);
        }
        String[] labels = {"width","height","grid"}; 
        Token[] tokens = {new IntToken(_width),
                new IntToken(_height),
                new ArrayToken(grid)};  
        RecordToken outputToken = new RecordToken(labels, tokens);
        output.broadcast(outputToken);
    }

    /** Image that is read in. */
    private int[] _grid;

    /** Image width. */
    private int _width;
    /** Image height. */
    private int _height; 

    private int[] _levels;

    private boolean _quantize;


}