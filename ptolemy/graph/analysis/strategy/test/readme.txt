
Tests for the ptolemy.graph.analysis.strategy package.

@author Shahrooz Shahparnia based on a file by S. Bhattacharyya
@version $Id: readme.txt 28696 2003-06-27 20:52:08Z shuvra $

These classes are being tested with the associated analyses in
the analysis package.

If a test is giving errors write the content of the buffer to a file and
compare. Following code can be used for this purpose.

    set fileChannel [open temp.txt w+]
    puts $fileChannel $fileBuffer 
    close $fileChannel