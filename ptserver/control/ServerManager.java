/* Ptolemy server which manages the broker, servlet, and simulations.

 Copyright (c) 2011-2014 The Regents of the University of California.
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

package ptserver.control;

import java.util.LinkedHashMap;

import com.caucho.hessian.server.HessianServlet;

import ptolemy.kernel.util.IllegalActionException;
import ptserver.communication.ProxyModelResponse;

///////////////////////////////////////////////////////////////////
//// ServerManager

/** Acts as a facade to the Ptolemy server application and administers control
 *  commands coming through the servlet.
 *
 *  @author Justin Killian
 *  @version $Id: ServerManager.java 72972 2015-08-05 23:34:57Z cxh $
 *  @since Ptolemy II 10.0
 *  @Pt.ProposedRating Red (jkillian)
 *  @Pt.AcceptedRating Red (jkillian)
 */
@SuppressWarnings("serial")
public class ServerManager extends HessianServlet implements IServerManager {

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Shut down the thread associated with the user's ticket.
     *  @param ticket Ticket reference to the simulation request.
     *  @exception IllegalActionException If the server was unable to
     *  destroy the simulation thread.
     */
    @Override
    public void close(Ticket ticket) throws IllegalActionException {
        PtolemyServer.getInstance().close(ticket);
    }

    /** Download the selected model to the client.
     *  @param url URL of the model file.
     *  @return Byte array containing the model data.
     *  @exception IllegalActionException If the server encountered an error opening the model file.
     */
    @Override
    public byte[] downloadModel(String url) throws IllegalActionException {
        return PtolemyServer.getInstance().downloadModel(url);
    }

    /** Get a listing of the models available on the server in either the
     *  database or the local file system.
     *  @return An array of URLs for the models available on the server.
     *  @exception IllegalActionException If there was a problem discovering available models.
     */
    @Override
    public String[] getModelListing() throws IllegalActionException {
        return PtolemyServer.getInstance().getModelListing();
    }

    /** Get a listing of the layouts for a specific model available on the
     *  server in either the database or the local file system.
     *  @param url Address of the model file for which layouts are found.
     *  @return An array of URLs for the layouts available for the model on the server.
     *  @exception IllegalActionException If there was a problem discovering available layouts.
     */
    @Override
    public String[] getLayoutListing(String url) throws IllegalActionException {
        return PtolemyServer.getInstance().getLayoutListing(url);
    }

    /** Get the token handlers loaded on the server so that they can be
     *  set up on the client.
     *  @return The token handler map from the server.
     *  @exception IllegalActionException If the server was unable to get the handler map.
     */
    @Override
    public LinkedHashMap<String, String> getTokenHandlerMap()
            throws IllegalActionException {
        return PtolemyServer.getInstance().getTokenHandlerMap();
    }

    /** Open a model with the provided model URL and wait for the
     *  user to request the execution of the simulation.
     *  @param modelUrl The path to the model file
     *  @param layoutUrl The path to a model's layout file
     *  @return The user's reference to the simulation task along with
     *  specifically formatted for the client model XML and its inferred types
     *  @exception IllegalActionException If the model fails to load
     *  from the provided URL.
     */
    @Override
    public ProxyModelResponse open(String modelUrl, String layoutUrl)
            throws IllegalActionException {
        return PtolemyServer.getInstance().open(modelUrl, layoutUrl);
    }

    /** Pause the execution of the selected simulation.
     *  @param ticket The ticket reference to the simulation request.
     *  @exception IllegalActionException If the server was unable to
     *  pause the running simulation.
     */
    @Override
    public void pause(Ticket ticket) throws IllegalActionException {
        PtolemyServer.getInstance().pause(ticket);
    }

    /** Resume the execution of the selected simulation.
     *  @param ticket The ticket reference to the simulation request.
     *  @exception IllegalActionException If the server was unable to
     *  resume the execution of the simulation.
     */
    @Override
    public void resume(Ticket ticket) throws IllegalActionException {
        PtolemyServer.getInstance().resume(ticket);
    }

    /** Start the execution of the selected simulation.
     *  @param ticket The ticket reference to the simulation request.
     *  @exception IllegalActionException If the server was unable to
     *  start the simulation.
     */
    @Override
    public void start(Ticket ticket) throws IllegalActionException {
        PtolemyServer.getInstance().start(ticket);
    }

    /** Stop the execution of the selected simulation.
     *  @param ticket The ticket reference to the simulation request.
     *  @exception IllegalActionException If the server was unable to
     *  stop the simulation.
     */
    @Override
    public void stop(Ticket ticket) throws IllegalActionException {
        PtolemyServer.getInstance().stop(ticket);
    }
}
