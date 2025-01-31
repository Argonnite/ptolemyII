/* Generated By:JJTree&JavaCC: Do not edit this line. PtParserConstants.java */
/*
 Copyright (c) 1998-2015 The Regents of the University of California.
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

Created : May 1998
 */

package ptolemy.data.expr;

/**
 * Token literal values and constants.
 * Generated by org.javacc.parser.OtherFilesGen#start()
 */
public interface PtParserConstants {

    /** End of File. */
    int EOF = 0;
    /** RegularExpression Id. */
    int SINGLE_LINE_COMMENT = 3;
    /** RegularExpression Id. */
    int MULTI_LINE_COMMENT = 4;
    /** RegularExpression Id. */
    int PLUS = 10;
    /** RegularExpression Id. */
    int MINUS = 11;
    /** RegularExpression Id. */
    int MULTIPLY = 12;
    /** RegularExpression Id. */
    int DIVIDE = 13;
    /** RegularExpression Id. */
    int MODULO = 14;
    /** RegularExpression Id. */
    int POWER = 15;
    /** RegularExpression Id. */
    int OPENPAREN = 16;
    /** RegularExpression Id. */
    int CLOSEPAREN = 17;
    /** RegularExpression Id. */
    int OPENBRACE = 18;
    /** RegularExpression Id. */
    int CLOSEBRACE = 19;
    /** RegularExpression Id. */
    int OPENBRACKET = 20;
    /** RegularExpression Id. */
    int CLOSEBRACKET = 21;
    /** RegularExpression Id. */
    int COMMA = 22;
    /** RegularExpression Id. */
    int PERIOD = 23;
    /** RegularExpression Id. */
    int COLON = 24;
    /** RegularExpression Id. */
    int QUESTION = 25;
    /** RegularExpression Id. */
    int OPENUNION = 26;
    /** RegularExpression Id. */
    int CLOSEUNION = 27;
    /** RegularExpression Id. */
    int GT = 28;
    /** RegularExpression Id. */
    int LT = 29;
    /** RegularExpression Id. */
    int GTE = 30;
    /** RegularExpression Id. */
    int LTE = 31;
    /** RegularExpression Id. */
    int NOTEQUALS = 32;
    /** RegularExpression Id. */
    int EQUALS = 33;
    /** RegularExpression Id. */
    int COND_AND = 34;
    /** RegularExpression Id. */
    int COND_OR = 35;
    /** RegularExpression Id. */
    int BOOL_NOT = 36;
    /** RegularExpression Id. */
    int BITWISE_NOT = 37;
    /** RegularExpression Id. */
    int AND = 38;
    /** RegularExpression Id. */
    int OR = 39;
    /** RegularExpression Id. */
    int XOR = 40;
    /** RegularExpression Id. */
    int SHL = 41;
    /** RegularExpression Id. */
    int SHR = 42;
    /** RegularExpression Id. */
    int LSHR = 43;
    /** RegularExpression Id. */
    int INTEGER = 44;
    /** RegularExpression Id. */
    int INTEGER_FORMAT_SPEC = 45;
    /** RegularExpression Id. */
    int DECIMAL_LITERAL = 46;
    /** RegularExpression Id. */
    int HEX_LITERAL = 47;
    /** RegularExpression Id. */
    int OCTAL_LITERAL = 48;
    /** RegularExpression Id. */
    int EXPONENT = 49;
    /** RegularExpression Id. */
    int DOUBLE = 50;
    /** RegularExpression Id. */
    int COMPLEX = 51;
    /** RegularExpression Id. */
    int BOOLEAN = 52;
    /** RegularExpression Id. */
    int FUNCTION = 53;
    /** RegularExpression Id. */
    int ID = 54;
    /** RegularExpression Id. */
    int LETTER = 55;
    /** RegularExpression Id. */
    int STRING = 56;
    /** RegularExpression Id. */
    int SETEQUALS = 57;
    /** RegularExpression Id. */
    int SEPARATOR = 58;
    /** RegularExpression Id. */
    int SMSTRING = 59;
    /** RegularExpression Id. */
    int SMDOLLAR = 60;
    /** RegularExpression Id. */
    int SMDOLLARBRACE = 61;
    /** RegularExpression Id. */
    int SMDOLLARPAREN = 62;
    /** RegularExpression Id. */
    int SMID = 63;
    /** RegularExpression Id. */
    int SMLETTER = 64;
    /** RegularExpression Id. */
    int SMIDBRACE = 65;
    /** RegularExpression Id. */
    int SMBRACE = 66;
    /** RegularExpression Id. */
    int SMIDPAREN = 67;
    /** RegularExpression Id. */
    int SMPAREN = 68;
    /** RegularExpression Id. */
    int ERROR = 69;

    /** Lexical state. */
    int DEFAULT = 0;
    /** Lexical state. */
    int SingleLineCommentMode = 1;
    /** Lexical state. */
    int MultiLineCommentMode = 2;
    /** Lexical state. */
    int StringModeIDBrace = 3;
    /** Lexical state. */
    int StringModeIDParen = 4;
    /** Lexical state. */
    int StringMode = 5;
    /** Lexical state. */
    int StringModeIDNone = 6;

    /** Literal token values. */
    String[] tokenImage = { "<EOF>", "\"//\"", "\"/*\"",
            "<SINGLE_LINE_COMMENT>", "\"*/\"", "<token of kind 5>", "\" \"",
            "\"\\r\"", "\"\\t\"", "\"\\n\"", "\"+\"", "\"-\"", "\"*\"",
            "\"/\"", "\"%\"", "\"^\"", "\"(\"", "\")\"", "\"{\"", "\"}\"",
            "\"[\"", "\"]\"", "\",\"", "\".\"", "\":\"", "\"?\"", "\"{|\"",
            "\"|}\"", "\">\"", "\"<\"", "\">=\"", "\"<=\"", "\"!=\"", "\"==\"",
            "\"&&\"", "\"||\"", "\"!\"", "\"~\"", "\"&\"", "\"|\"", "\"#\"",
            "\"<<\"", "\">>\"", "\">>>\"", "<INTEGER>",
            "<INTEGER_FORMAT_SPEC>", "<DECIMAL_LITERAL>", "<HEX_LITERAL>",
            "<OCTAL_LITERAL>", "<EXPONENT>", "<DOUBLE>", "<COMPLEX>",
            "<BOOLEAN>", "\"function\"", "<ID>", "<LETTER>", "<STRING>",
            "\"=\"", "\";\"", "<SMSTRING>", "\"$\"", "\"${\"", "\"$(\"",
            "<SMID>", "<SMLETTER>", "<SMIDBRACE>", "<SMBRACE>", "<SMIDPAREN>",
            "<SMPAREN>", "<ERROR>", };

}
