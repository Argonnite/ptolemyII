/* Generated By:JavaCC: Do not edit this line. UParser.java */
/*

 Copyright (c) 1998-2008 The Regents of the University of California.
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

                                        PT_COPYRIGHT_VERSION_3
                                        COPYRIGHTENDKEY
 */

package ptolemy.moml.unit;

import java.io.Reader;
import java.io.StringReader;
import java.util.Locale;
import java.util.Vector;

//////////////////////////////////////////////////////////////////////
//// UParser.jj
/**
This file implements a Unit parser for Ptolemy II using the
JavaCC parser generator.

@author Rowland R Johnson
@version UParser.jj,v 1.9 2004/04/14 14:18:38 rowland Exp
@since Ptolemy II 4.0
@Pt.ProposedRating Red (rowland)
@Pt.AcceptedRating Red (rowland)
 */
@SuppressWarnings("unused")
public class UParser implements UParserConstants {

    boolean debug = false;

    public UParser() {
        this(new StringReader(""));
    }

    /** Parse a unit expression.
     * @param expression
     * @exception ParseException If parsing error is encountered.
     */
    public UnitExpr parseUnitExpr(String expression) throws ParseException {

        if (expression.equals("")) {
            return null;
        }
        Reader reader = new StringReader(expression);
        this.ReInit(reader);
        // Parse the expression to obtain the parse tree
        UnitExpr unitExpr = uExpr();
        return unitExpr;
    }

    /** Parse a set of equations separated by semicolons.
     * @param expression
     * @exception ParseException If parsing error is encountered.
     */
    public Vector parseEquations(String expression) throws ParseException {

        if (expression.equals("")) {
            return null;
        }
        Reader reader = new StringReader(expression);
        this.ReInit(reader);
        // Parse the expression to obtain the parse tree
        Vector _equations = Equations();
        return _equations;
    }

    final public UnitExpr uExpr() throws ParseException {
        UnitTerm unitTerm = null;
        UnitTerm firstUnitTerm = null;

        UnitExpr unitExpr = new UnitExpr();
        firstUnitTerm = uTerm();
        unitExpr.addUnitTerm(firstUnitTerm);
        label_1: while (true) {
            switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
            case MULTIPLY:
            case DIVIDE:
            case INTEGER:
            case DOUBLE:
            case UNITLABEL:
            case PORT:
            case LPAREN:
                ;
                break;
            default:
                jj_la1[0] = jj_gen;
                break label_1;
            }
            switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
            case DIVIDE:
                jj_consume_token(DIVIDE);
                unitTerm = uTerm();
                unitExpr.addUnitTerm(unitTerm.invert());
                break;
            case MULTIPLY:
                jj_consume_token(MULTIPLY);
                unitTerm = uTerm();
                unitExpr.addUnitTerm(unitTerm);
                break;
            case INTEGER:
            case DOUBLE:
            case UNITLABEL:
            case PORT:
            case LPAREN:
                unitTerm = uTerm();
                unitExpr.addUnitTerm(unitTerm);
                break;
            default:
                jj_la1[1] = jj_gen;
                jj_consume_token(-1);
                throw new ParseException();
            }
        }
        {
            if (true) {
                return unitExpr;
            }
        }
        throw new Error("Missing return statement in function");
    }

    final public UnitTerm uTerm() throws ParseException {
        UnitTerm unitTerm = new UnitTerm();
        UnitExpr unitExpr;
        Token U;
        int exponent;
        double scale;
        if (jj_2_1(2)) {
            U = unit();
            jj_consume_token(POWER);
            exponent = exponent();
            String unitLabel = U.image;
            if (U.kind == UParserConstants.PORT) {
                unitTerm.setVariable(unitLabel.substring(1));
            } else if (U.kind == UParserConstants.UNITLABEL) {
                Unit unit = UnitLibrary.getUnitByName(unitLabel);
                if (unit != null) {
                    unitTerm.setUnit(unit);
                } else {
                    {
                        if (true) {
                            throw new ParseException(
                                    unitLabel
                                    + " is a not variable and is not grounded in the Units Library");
                        }
                    }
                }
            } else {
                {
                    if (true) {
                        throw new ParseException(unitLabel
                                + " is a not variable and is not a Unit");
                    }
                }
            }

            unitTerm.setExponent(exponent);
        } else {
            switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
            case UNITLABEL:
            case PORT:
                U = unit();
                String unitLabel = U.image;
                if (U.kind == UParserConstants.PORT) {
                    unitTerm.setVariable(unitLabel.substring(1));
                } else if (U.kind == UParserConstants.UNITLABEL) {
                    Unit unit = UnitLibrary.getUnitByName(unitLabel);
                    if (unit != null) {
                        unitTerm.setUnit(unit);
                    } else {
                        {
                            if (true) {
                                throw new ParseException(
                                        unitLabel
                                        + " is a not variable and is not grounded in the Units Library");
                            }
                        }
                    }
                } else {
                    {
                        if (true) {
                            throw new ParseException(unitLabel
                                    + " is a not variable and is not a Unit");
                        }
                    }
                }
                break;
            case INTEGER:
            case DOUBLE:
                scale = number();
                Unit unit = new Unit();
                unit.setScale(scale);
                unitTerm.setUnit(unit);
                break;
            case LPAREN:
                jj_consume_token(LPAREN);
                unitExpr = uExpr();
                jj_consume_token(RPAREN);
                unitTerm.setUnitExpr(unitExpr);
                ;
                break;
            default:
                jj_la1[2] = jj_gen;
                jj_consume_token(-1);
                throw new ParseException();
            }
        }
        {
            if (true) {
                return unitTerm;
            }
        }
        throw new Error("Missing return statement in function");
    }

    final public Token unit() throws ParseException {
        Token retv;
        switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
        case UNITLABEL:
            retv = jj_consume_token(UNITLABEL);
            break;
        case PORT:
            retv = jj_consume_token(PORT);
            break;
        default:
            jj_la1[3] = jj_gen;
            jj_consume_token(-1);
            throw new ParseException();
        }
        {
            if (true) {
                return retv;
            }
        }
        throw new Error("Missing return statement in function");
    }

    final public Vector Equations() throws ParseException {
        Vector l = null;
        UnitEquation node;
        node = Equation();
        label_2: while (true) {
            if (jj_2_2(2)) {
                ;
            } else {
                break label_2;
            }
            jj_consume_token(SEMICOLON);
            l = Equations();
        }
        if (l == null) {
            l = new Vector();
        }
        l.add(node);
        {
            if (true) {
                return l;
            }
        }
        throw new Error("Missing return statement in function");
    }

    final public UnitEquation Equation() throws ParseException {
        UnitEquation uEquation;
        UnitExpr lhs, rhs;
        lhs = uExpr();
        switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
        case EQUALS:
            jj_consume_token(EQUALS);
            break;
        case LT:
            jj_consume_token(LT);
            break;
        default:
            jj_la1[4] = jj_gen;
            jj_consume_token(-1);
            throw new ParseException();
        }
        rhs = uExpr();
        uEquation = new UnitEquation(lhs, rhs);
        {
            if (true) {
                return uEquation;
            }
        }
        throw new Error("Missing return statement in function");
    }

    final public int exponent() throws ParseException {
        Token x;
        int retv;
        switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
        case INTEGER:
            x = jj_consume_token(INTEGER);
            retv = Integer.parseInt(x.image);
            {
                if (true) {
                    return retv;
                }
            }
            break;
        case MINUS:
            jj_consume_token(MINUS);
            x = jj_consume_token(INTEGER);
            retv = -Integer.parseInt(x.image);
            {
                if (true) {
                    return retv;
                }
            }
            break;
        default:
            jj_la1[5] = jj_gen;
            jj_consume_token(-1);
            throw new ParseException();
        }
        throw new Error("Missing return statement in function");
    }

    final public double number() throws ParseException {
        int len;
        String x;
        switch (jj_ntk == -1 ? jj_ntk() : jj_ntk) {
        case DOUBLE:
            jj_consume_token(DOUBLE);
            Double value;
            try {
                x = token.image.toLowerCase(Locale.getDefault());
                len = x.length();
                if (x.endsWith("d") || x.endsWith("f")) {
                    // all floating point numbers are double
                    value = new Double(x.substring(0, len - 1));
                } else {
                    value = new Double(x);
                }
            } catch (NumberFormatException ee) {
                {
                    if (true) {
                        throw new ParseException("Unable to convert token "
                                + token.image + " to an float or double");
                    }
                }
            }
            {
                if (true) {
                    return value.doubleValue();
                }
            }
            break;
        case INTEGER:
            jj_consume_token(INTEGER);
            try {
                x = token.image.toLowerCase(Locale.getDefault());
                len = x.length();

                int radix;
                boolean mustBeLong = x.endsWith("l");

                int prefixLength;
                int suffixLength;

                if (mustBeLong) {
                    suffixLength = 1;
                } else {
                    suffixLength = 0;
                }

                if (x.startsWith("0x")) {
                    // Input is a hex number.
                    radix = 16;
                    prefixLength = 2;
                } else if (x.startsWith("0")) {
                    // Input is an octal number.
                    radix = 8;
                    prefixLength = 0;
                } else {
                    // Input is a decimal number.
                    radix = 10;
                    prefixLength = 0;
                }

                // Strip off the radix prefix and the length suffix.
                x = x.substring(prefixLength, len - suffixLength);

                if (mustBeLong) {
                    // If the size was specified as long, then create a long.
                    {
                        if (true) {
                            return Long.parseLong(x, radix);
                        }
                    }
                } else {
                    // Try to infer the size.  Inferred sizes are at least
                    // integer.
                    try {
                        {
                            if (true) {
                                return Integer.parseInt(x, radix);
                            }
                        }
                    } catch (NumberFormatException nfe) {
                        {
                            if (true) {
                                return Double.NaN;
                            }
                        }
                    }
                }
            } catch (NumberFormatException ee) {
                {
                    if (true) {
                        throw new ParseException("Unable to convert token "
                                + token.image + " to an integer or long");
                    }
                }
            }
            break;
        default:
            jj_la1[6] = jj_gen;
            jj_consume_token(-1);
            throw new ParseException();
        }
        throw new Error("Missing return statement in function");
    }

    private boolean jj_2_1(int xla) {
        jj_la = xla;
        jj_lastpos = jj_scanpos = token;
        try {
            return !jj_3_1();
        } catch (LookaheadSuccess ls) {
            return true;
        } finally {
            jj_save(0, xla);
        }
    }

    private boolean jj_2_2(int xla) {
        jj_la = xla;
        jj_lastpos = jj_scanpos = token;
        try {
            return !jj_3_2();
        } catch (LookaheadSuccess ls) {
            return true;
        } finally {
            jj_save(1, xla);
        }
    }

    private boolean jj_3R_9() {
        if (jj_3R_11()) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_7() {
        Token xsp;
        xsp = jj_scanpos;
        if (jj_3_1()) {
            jj_scanpos = xsp;
            if (jj_3R_8()) {
                jj_scanpos = xsp;
                if (jj_3R_9()) {
                    jj_scanpos = xsp;
                    if (jj_3R_10()) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    private boolean jj_3R_13() {
        if (jj_scan_token(INTEGER)) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_3() {
        Token xsp;
        xsp = jj_scanpos;
        if (jj_scan_token(17)) {
            jj_scanpos = xsp;
            if (jj_scan_token(19)) {
                return true;
            }
        }
        return false;
    }

    private boolean jj_3R_12() {
        if (jj_scan_token(DOUBLE)) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_11() {
        Token xsp;
        xsp = jj_scanpos;
        if (jj_3R_12()) {
            jj_scanpos = xsp;
            if (jj_3R_13()) {
                return true;
            }
        }
        return false;
    }

    private boolean jj_3R_4() {
        if (jj_3R_5()) {
            return true;
        }
        return false;
    }

    private boolean jj_3_2() {
        if (jj_scan_token(SEMICOLON)) {
            return true;
        }
        if (jj_3R_4()) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_6() {
        if (jj_3R_7()) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_10() {
        if (jj_scan_token(LPAREN)) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_5() {
        if (jj_3R_6()) {
            return true;
        }
        return false;
    }

    private boolean jj_3R_8() {
        if (jj_3R_3()) {
            return true;
        }
        return false;
    }

    private boolean jj_3_1() {
        if (jj_3R_3()) {
            return true;
        }
        if (jj_scan_token(POWER)) {
            return true;
        }
        return false;
    }

    /** Generated Token Manager. */
    public UParserTokenManager token_source;
    SimpleCharStream jj_input_stream;
    /** Current token. */
    public Token token;
    /** Next token. */
    public Token jj_nt;
    private int jj_ntk;
    private Token jj_scanpos, jj_lastpos;
    private int jj_la;
    private int jj_gen;
    final private int[] jj_la1 = new int[7];
    static private int[] jj_la1_0;
    static {
        jj_la1_init_0();
    }

    private static void jj_la1_init_0() {
        jj_la1_0 = new int[] { 0x1b4180, 0x1b4180, 0x1b4000, 0xa0000, 0xc00,
                0x4040, 0x14000, };
    }

    final private JJCalls[] jj_2_rtns = new JJCalls[2];
    private boolean jj_rescan = false;
    private int jj_gc = 0;

    /** Constructor with InputStream. */
    public UParser(java.io.InputStream stream) {
        this(stream, null);
    }

    /** Constructor with InputStream and supplied encoding */
    public UParser(java.io.InputStream stream, String encoding) {
        try {
            jj_input_stream = new SimpleCharStream(stream, encoding, 1, 1);
        } catch (java.io.UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
        token_source = new UParserTokenManager(jj_input_stream);
        token = new Token();
        jj_ntk = -1;
        jj_gen = 0;
        for (int i = 0; i < 7; i++) {
            jj_la1[i] = -1;
        }
        for (int i = 0; i < jj_2_rtns.length; i++) {
            jj_2_rtns[i] = new JJCalls();
        }
    }

    /** Reinitialise. */
    public void ReInit(java.io.InputStream stream) {
        ReInit(stream, null);
    }

    /** Reinitialise. */
    public void ReInit(java.io.InputStream stream, String encoding) {
        try {
            jj_input_stream.ReInit(stream, encoding, 1, 1);
        } catch (java.io.UnsupportedEncodingException e) {
            throw new RuntimeException(e);
        }
        token_source.ReInit(jj_input_stream);
        token = new Token();
        jj_ntk = -1;
        jj_gen = 0;
        for (int i = 0; i < 7; i++) {
            jj_la1[i] = -1;
        }
        for (int i = 0; i < jj_2_rtns.length; i++) {
            jj_2_rtns[i] = new JJCalls();
        }
    }

    /** Constructor. */
    public UParser(java.io.Reader stream) {
        jj_input_stream = new SimpleCharStream(stream, 1, 1);
        token_source = new UParserTokenManager(jj_input_stream);
        token = new Token();
        jj_ntk = -1;
        jj_gen = 0;
        for (int i = 0; i < 7; i++) {
            jj_la1[i] = -1;
        }
        for (int i = 0; i < jj_2_rtns.length; i++) {
            jj_2_rtns[i] = new JJCalls();
        }
    }

    /** Reinitialise. */
    public void ReInit(java.io.Reader stream) {
        jj_input_stream.ReInit(stream, 1, 1);
        token_source.ReInit(jj_input_stream);
        token = new Token();
        jj_ntk = -1;
        jj_gen = 0;
        for (int i = 0; i < 7; i++) {
            jj_la1[i] = -1;
        }
        for (int i = 0; i < jj_2_rtns.length; i++) {
            jj_2_rtns[i] = new JJCalls();
        }
    }

    /** Constructor with generated Token Manager. */
    public UParser(UParserTokenManager tm) {
        token_source = tm;
        token = new Token();
        jj_ntk = -1;
        jj_gen = 0;
        for (int i = 0; i < 7; i++) {
            jj_la1[i] = -1;
        }
        for (int i = 0; i < jj_2_rtns.length; i++) {
            jj_2_rtns[i] = new JJCalls();
        }
    }

    /** Reinitialise. */
    public void ReInit(UParserTokenManager tm) {
        token_source = tm;
        token = new Token();
        jj_ntk = -1;
        jj_gen = 0;
        for (int i = 0; i < 7; i++) {
            jj_la1[i] = -1;
        }
        for (int i = 0; i < jj_2_rtns.length; i++) {
            jj_2_rtns[i] = new JJCalls();
        }
    }

    private Token jj_consume_token(int kind) throws ParseException {
        Token oldToken;
        if ((oldToken = token).next != null) {
            token = token.next;
        } else {
            token = token.next = token_source.getNextToken();
        }
        jj_ntk = -1;
        if (token.kind == kind) {
            jj_gen++;
            if (++jj_gc > 100) {
                jj_gc = 0;
                for (JJCalls jj_2_rtn : jj_2_rtns) {
                    JJCalls c = jj_2_rtn;
                    while (c != null) {
                        if (c.gen < jj_gen) {
                            c.first = null;
                        }
                        c = c.next;
                    }
                }
            }
            return token;
        }
        token = oldToken;
        jj_kind = kind;
        throw generateParseException();
    }

    @SuppressWarnings("serial")
    static private final class LookaheadSuccess extends java.lang.Error {
    }

    final private LookaheadSuccess jj_ls = new LookaheadSuccess();

    private boolean jj_scan_token(int kind) {
        if (jj_scanpos == jj_lastpos) {
            jj_la--;
            if (jj_scanpos.next == null) {
                jj_lastpos = jj_scanpos = jj_scanpos.next = token_source
                        .getNextToken();
            } else {
                jj_lastpos = jj_scanpos = jj_scanpos.next;
            }
        } else {
            jj_scanpos = jj_scanpos.next;
        }
        if (jj_rescan) {
            int i = 0;
            Token tok = token;
            while (tok != null && tok != jj_scanpos) {
                i++;
                tok = tok.next;
            }
            if (tok != null) {
                jj_add_error_token(kind, i);
            }
        }
        if (jj_scanpos.kind != kind) {
            return true;
        }
        if (jj_la == 0 && jj_scanpos == jj_lastpos) {
            throw jj_ls;
        }
        return false;
    }

    /** Get the next Token. */
    final public Token getNextToken() {
        if (token.next != null) {
            token = token.next;
        } else {
            token = token.next = token_source.getNextToken();
        }
        jj_ntk = -1;
        jj_gen++;
        return token;
    }

    /** Get the specific Token. */
    final public Token getToken(int index) {
        Token t = token;
        for (int i = 0; i < index; i++) {
            if (t.next != null) {
                t = t.next;
            } else {
                t = t.next = token_source.getNextToken();
            }
        }
        return t;
    }

    private int jj_ntk() {
        if ((jj_nt = token.next) == null) {
            return jj_ntk = (token.next = token_source.getNextToken()).kind;
        } else {
            return jj_ntk = jj_nt.kind;
        }
    }

    private java.util.List<int[]> jj_expentries = new java.util.ArrayList<int[]>();
    private int[] jj_expentry;
    private int jj_kind = -1;
    private int[] jj_lasttokens = new int[100];
    private int jj_endpos;

    private void jj_add_error_token(int kind, int pos) {
        if (pos >= 100) {
            return;
        }
        if (pos == jj_endpos + 1) {
            jj_lasttokens[jj_endpos++] = kind;
        } else if (jj_endpos != 0) {
            jj_expentry = new int[jj_endpos];
            for (int i = 0; i < jj_endpos; i++) {
                jj_expentry[i] = jj_lasttokens[i];
            }
            jj_entries_loop: for (Object name : jj_expentries) {
                int[] oldentry = (int[]) name;
                if (oldentry.length == jj_expentry.length) {
                    for (int i = 0; i < jj_expentry.length; i++) {
                        if (oldentry[i] != jj_expentry[i]) {
                            continue jj_entries_loop;
                        }
                    }
                    jj_expentries.add(jj_expentry);
                    break jj_entries_loop;
                }
            }
            if (pos != 0) {
                jj_lasttokens[(jj_endpos = pos) - 1] = kind;
            }
        }
    }

    /** Generate ParseException. */
    public ParseException generateParseException() {
        jj_expentries.clear();
        boolean[] la1tokens = new boolean[22];
        if (jj_kind >= 0) {
            la1tokens[jj_kind] = true;
            jj_kind = -1;
        }
        for (int i = 0; i < 7; i++) {
            if (jj_la1[i] == jj_gen) {
                for (int j = 0; j < 32; j++) {
                    if ((jj_la1_0[i] & 1 << j) != 0) {
                        la1tokens[j] = true;
                    }
                }
            }
        }
        for (int i = 0; i < 22; i++) {
            if (la1tokens[i]) {
                jj_expentry = new int[1];
                jj_expentry[0] = i;
                jj_expentries.add(jj_expentry);
            }
        }
        jj_endpos = 0;
        jj_rescan_token();
        jj_add_error_token(0, 0);
        int[][] exptokseq = new int[jj_expentries.size()][];
        for (int i = 0; i < jj_expentries.size(); i++) {
            exptokseq[i] = jj_expentries.get(i);
        }
        return new ParseException(token, exptokseq, tokenImage);
    }

    /** Enable tracing. */
    final public void enable_tracing() {
    }

    /** Disable tracing. */
    final public void disable_tracing() {
    }

    private void jj_rescan_token() {
        jj_rescan = true;
        for (int i = 0; i < 2; i++) {
            try {
                JJCalls p = jj_2_rtns[i];
                do {
                    if (p.gen > jj_gen) {
                        jj_la = p.arg;
                        jj_lastpos = jj_scanpos = p.first;
                        switch (i) {
                        case 0:
                            jj_3_1();
                            break;
                        case 1:
                            jj_3_2();
                            break;
                        }
                    }
                    p = p.next;
                } while (p != null);
            } catch (LookaheadSuccess ls) {
            }
        }
        jj_rescan = false;
    }

    private void jj_save(int index, int xla) {
        JJCalls p = jj_2_rtns[index];
        while (p.gen > jj_gen) {
            if (p.next == null) {
                p = p.next = new JJCalls();
                break;
            }
            p = p.next;
        }
        p.gen = jj_gen + xla - jj_la;
        p.first = token;
        p.arg = xla;
    }

    static final class JJCalls {
        int gen;
        Token first;
        int arg;
        JJCalls next;
    }

}
