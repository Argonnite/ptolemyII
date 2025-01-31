/* A library for mathematical operations on arrays of longs.

 Copyright (c) 1998-2014 The Regents of the University of California.
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
package ptolemy.math;

///////////////////////////////////////////////////////////////////
//// LongArrayMath

/**
 This class provides a library for mathematical operations on long arrays.
 Unless explicitly noted otherwise, all array arguments are assumed to be
 non-null. If a null array is passed to a method, a NullPointerException
 will be thrown in the method or called methods.

 @author Albert Chen, William Wu, Edward A. Lee, Jeff Tsay
 @version $Id: LongArrayMath.java 70398 2014-10-22 23:44:32Z cxh $
 @since Ptolemy II 1.0
 @Pt.ProposedRating Yellow (ctsay)
 @Pt.AcceptedRating Yellow (ctsay)
 */
public class LongArrayMath {
    // Protected constructor prevents construction of this class.
    protected LongArrayMath() {
    }

    ///////////////////////////////////////////////////////////////////
    ////                         public methods                    ////

    /** Return a new array that is the formed by adding z to each element
     *  of the input array.
     */
    public static final long[] add(final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] + z;
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element sum of the two
     *  input arrays.
     *  If the lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] add(final long[] array1, final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.add");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] + array2[i];
        }

        return returnValue;
    }

    /** Return a new array that is a copy of the array argument.
     *  @param array An array of ints.
     *  @return A new array of ints.
     */
    public static final long[] allocCopy(final long[] array) {
        int elements = array.length;
        long[] newArray = new long[elements];
        System.arraycopy(array, 0, newArray, 0, elements);
        return newArray;
    }

    /** Return a new array that is the result of appending array2 to the end
     *  of array1. This method simply calls
     *  append(array1, 0, array1.length, array2, 0, array2.length)
     */
    public static final long[] append(final long[] array1, final long[] array2) {
        return append(array1, 0, array1.length, array2, 0, array2.length);
    }

    /** Return a new array that is the result of appending length2
     *  elements of array2, starting from the array1[idx2] to length1
     *  elements of array1, starting from array1[idx1].
     *  Appending empty arrays is supported. In that case, the corresponding
     *  idx may be any number. Allow System.arraycopy() to throw array access
     *  exceptions if idx .. idx + length - 1 are not all valid array indices,
     *  for both of the arrays.
     *  @param array1 The first array of longs.
     *  @param idx1 The starting index for array1.
     *  @param length1 The number of elements of array1 to use.
     *  @param array2 The second array of longs, which is appended.
     *  @param idx2 The starting index for array2.
     *  @param length2 The number of elements of array2 to append.
     *  @return A new array of longs.
     */
    public static final long[] append(final long[] array1, final int idx1,
            final int length1, final long[] array2, final int idx2,
            final int length2) {
        long[] returnValue = new long[length1 + length2];

        if (length1 > 0) {
            System.arraycopy(array1, idx1, returnValue, 0, length1);
        }

        if (length2 > 0) {
            System.arraycopy(array2, idx2, returnValue, length1, length2);
        }

        return returnValue;
    }

    /** Return a new array that is formed by applying an instance of a
     *  LongBinaryOperation to each element in the input array
     *  and z, using the array elements as the left operands and z
     *  as the right operand in all cases. (op.operate(array[i], z)).
     *  If the length of the array is 0, return a new array of length 0.
     */
    public static final long[] applyBinaryOperation(LongBinaryOperation op,
            final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = op.operate(array[i], z);
        }

        return returnValue;
    }

    /** Return a new array that is formed by applying an instance of a
     *  LongBinaryOperation to each element in the input array,
     *  using z as the left operand in all cases and the array elements
     *  as the right operands (op.operate(z, array[i])).
     *  If the length of the array is 0, return a new array of length 0.
     */
    public static final long[] applyBinaryOperation(LongBinaryOperation op,
            final long z, final long[] array) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = op.operate(array[i], z);
        }

        return returnValue;
    }

    /** Return a new array that is formed by applying an instance of a
     *  LongBinaryOperation to the two arrays, element by element,
     *  using the elements of the first array as the left operands and the
     *  elements of the second array as the right operands.
     *  (op.operate(array[i], array2[i])).
     *  If the lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] applyBinaryOperation(LongBinaryOperation op,
            final long[] array1, final long[] array2) {
        int length = _commonLength(array1, array2,
                "LongArrayMath.applyBinaryOperation");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = op.operate(array1[i], array2[i]);
        }

        return returnValue;
    }

    /** Return a new array that is formed by applying an instance of a
     *  LongUnaryOperation to each element in the input array
     *  (op.operate(array[i])).
     *  If the length of the array is 0, return a new array of length 0.
     */
    public static final long[] applyUnaryOperation(final LongUnaryOperation op,
            final long[] array) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = op.operate(array[i]);
        }

        return returnValue;
    }

    /** Return a new array that is the formed by bitwise ANDing z with
     *  each element of the input array (array[i] &amp; z).  If the length
     *  of the array is 0, return a new array of length 0.
     */
    public static final long[] bitwiseAnd(final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] & z;
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element bitwise AND
     *  of the two input arrays (array1[i] &amp; array2[i]).  If the
     *  lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] bitwiseAnd(final long[] array1,
            final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.bitwiseAnd");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] & array2[i];
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element bitwise
     *  complement of the input array (~array[i]).  If the length of
     *  the array is 0, return a new array of length 0.
     */
    public static final long[] bitwiseComplement(final long[] array) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = ~array[i];
        }

        return returnValue;
    }

    /** Return a new array that is the formed by bitwise ORing z with
     *  each element of the input array (array[i] | z).  If the length
     *  of the array is 0, return a new array of length 0.
     */
    public static final long[] bitwiseOr(final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] | z;
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element bitwise OR of the two
     *  input arrays (array1[i] | array2[i]).
     *  If the lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] bitwiseOr(final long[] array1,
            final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.bitwiseOr");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] | array2[i];
        }

        return returnValue;
    }

    /** Return a new array that is the formed by bitwise XORing z with
     *  each element of the input array (array[i] ^ z).  If the length
     *  of the array is 0, return a new array of length 0.
     */
    public static final long[] bitwiseXor(final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] ^ z;
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element bitwise XOR
     *  of the two input arrays (array1[i] ^ array2[i]).  If the
     *  lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] bitwiseXor(final long[] array1,
            final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.bitwiseXor");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] ^ array2[i];
        }

        return returnValue;
    }

    /** Return a new array that is the formed by dividing each element
     *  of the input array by z (array[i] / z).  If the length of the
     *  array is 0, return a new array of length 0.
     */
    public static final long[] divide(final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] / z;
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element division of
     *  the first array by the second array (array1[i] / array2[i]).
     *  If the lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     *  @param array1 The first array of longs.
     *  @param array2 The second array of longs.
     *  @return A new array of longs.
     */
    public static final long[] divideElements(final long[] array1,
            final long[] array2) {
        int length = _commonLength(array1, array2,
                "LongArrayMath.divideElements");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] / array2[i];
        }

        return returnValue;
    }

    /** Return the dot product of the two arrays.
     *  If the lengths of the array are both 0, return 0L.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long dotProduct(final long[] array1, final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.dotProduct");

        long sum = 0L;

        for (int i = 0; i < length; i++) {
            sum += array1[i] * array2[i];
        }

        return sum;
    }

    /** Return a new array that is a copy of the argument except that the
     *  elements are limited to lie within the specified range.
     *  <p> If any value is MAX_VALUE or MIN_VALUE,
     *  then it is replaced by either the top or the bottom, depending on
     *  its sign.  To leave either the bottom or the top unconstrained,
     *  specify Long.MIN_VALUE or Long.MAX_VALUE.
     *  <p> If the length of the array is 0, return a new array of length 0.
     *  @param array An array of longs.
     *  @param bottom The bottom limit.
     *  @param top The top limit.
     *  @return A new array with values in the range [bottom, top].
     */
    public static final long[] limit(final long[] array, final long bottom,
            final long top) {
        long[] returnValue = new long[array.length];

        for (int i = 0; i < array.length; i++) {
            if (array[i] > top || array[i] == Long.MAX_VALUE) {
                returnValue[i] = top;
            } else if (array[i] < bottom || array[i] == Long.MIN_VALUE) {
                returnValue[i] = bottom;
            } else {
                returnValue[i] = array[i];
            }
        }

        return returnValue;
    }

    /** Return a new array that is the formed by the modulo of each element
     *  of the input array and z (array[i] % z).
     */
    public static final long[] modulo(final long[] array, final long z) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] % z;
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element modulo of the two
     *  input arrays (array1[i] % array2[i]).
     *  If the lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] modulo(final long[] array1, final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.modulo");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] % array2[i];
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element multiplication of
     *  the two input arrays.
     *  If the lengths of both arrays are 0, return a new array of length 0.
     *  If the two arrays do not have the same length, throw an
     *  IllegalArgumentException.
     */
    public static final long[] multiply(final long[] array1, final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.multiply");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] * array2[i];
        }

        return returnValue;
    }

    /** Return a new array that is constructed from the argument by
     *  multiplying each element in the array by the second argument, which is
     *  a long.
     *  If the sizes of the array is 0, return a new array of size 0.
     *  @param array An array of longs.
     *  @param factor A long.
     *  @return A new array of longs.
     */
    public static final long[] multiply(long[] array, long factor) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i] * factor;
        }

        return returnValue;
    }

    /** Return a new array that is the formed by the additive inverse of each
     *  element of the input array (-array[i]).
     */
    public static final long[] negative(final long[] array) {
        int length = array.length;
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = -array[i];
        }

        return returnValue;
    }

    /** Return a new array of longs that is formed by padding the
     *  middle of the array with 0's. If either the length of the
     *  input array is odd, the sample with index ceil(L/2) will be
     *  repeated in the output array, where L is the length of the input array.
     *  If the length of the input and output arrays are equal, return
     *  a copy of the input array.
     *  This method is useful for preparing data for an IFFT.
     *  @param array An array of longs.
     *  @param newLength The desired length of the returned array.
     *  @return A new array of longs.
     */
    public static final long[] padMiddle(final long[] array, final int newLength) {
        int length = array.length;

        int entriesNeeded = newLength - length;

        if (entriesNeeded < 0) {
            throw new IllegalArgumentException("ptolemy.math."
                    + "LongArrayMath.padMiddle() : newLength must be "
                    + ">= length of array.");
        } else if (entriesNeeded == 0) {
            return resize(array, newLength); // allocates a new array
        }

        double halfLength = length * 0.5;
        int halfLengthFloor = (int) Math.floor(halfLength);
        int halfLengthCeil = (int) Math.ceil(halfLength);
        long[] returnValue = new long[newLength];

        System.arraycopy(array, 0, returnValue, 0, halfLengthCeil);

        System.arraycopy(array, halfLengthFloor, returnValue, newLength
                - halfLengthCeil, halfLengthCeil);

        return returnValue;
    }

    /** Return a new array of length newLength that is formed by
     *  either truncating or padding the input array.
     *  This method simply calls :
     *  resize(array, newLength, 0)
     *  @param array An array of longs.
     *  @param newLength The desired length of the output array.
     *  @return A new array of longs of length newLength.
     */
    public static final long[] resize(final long[] array, final int newLength) {
        return resize(array, newLength, 0);
    }

    /** Return a new array of length newLength that is formed by
     *  either truncating or padding the input array.
     *  Elements from the input array are copied to the output array,
     *  starting from array[startIdx] until one of the following conditions
     *  is met :
     *  1) The input array has no more elements to copy.
     *  2) The output array has been completely filled.
     *  startIdx must index a valid entry in array unless the input array
     *  is of zero length or the output array is of zero length.
     *  If case 1) is met, the remainder of the output array is filled with
     *  zero's, implicitly by Java (padding).
     *  @param array An array of longs.
     *  @param newLength The desired length of the output array.
     *  @param startIdx The starting index for the input array.
     *  @return A new array of longs of length newLength.
     */
    public static final long[] resize(long[] array, final int newLength,
            final int startIdx) {
        long[] returnValue = new long[newLength];
        int copySize = Math.min(newLength, array.length - startIdx);

        if (startIdx >= array.length && copySize > 0) {
            throw new IllegalArgumentException("resize():  the start index '"
                    + startIdx
                    + "' is greater than equal to the array length '"
                    + array.length + "' and the number of items to be copied '"
                    + copySize + "' is greater than zero.");
        }

        if (copySize > 0) {
            System.arraycopy(array, startIdx, returnValue, 0, copySize);
        }

        return returnValue;
    }

    /** Return a new array of longs produced by scaling the input
     *  array elements by scaleFactor.
     *  If the length of the array is 0, return a new array of length 0.
     */
    public static final long[] scale(long[] array, long scaleFactor) {
        long[] returnValue = new long[array.length];

        for (int i = 0; i < array.length; i++) {
            returnValue[i] = scaleFactor * array[i];
        }

        return returnValue;
    }

    /** Return a new array that is constructed from the argument by
     *  arithmetically shifting the elements in the array by the
     *  second argument.  If the second argument is positive, the
     *  elements are shifted left by the second argument. If the
     *  second argument is negative, the elements are shifted right
     *  (arithmetically, with the &gt;&gt;&gt; operator) by the absolute value
     *  of the second argument. If the second argument is 0, no
     *  operation is performed (the array is just copied).
     *
     *  @param array A first array of longs.
     *  @param shiftAmount The amount to shift by, positive for left shift,
     *  negative for right shift.
     *  @return A new array of longs.
     */
    public static final long[] shiftArithmetic(long[] array, int shiftAmount) {
        long[] returnValue = new long[array.length];

        if (shiftAmount >= 0) {
            for (int i = 0; i < array.length; i++) {
                returnValue[i] = array[i] << shiftAmount;
            }
        } else if (shiftAmount < 0) {
            for (int i = 0; i < array.length; i++) {
                returnValue[i] = array[i] >>> -shiftAmount;
            }
        }

        return returnValue;
    }

    /** Return a new array that is constructed from the argument by
     *  logically shifting the elements in the array by the second
     *  argument.  If the second argument is positive, the elements
     *  are shifted left by the second argument. If the second
     *  argument is negative, the elements are shifted right
     *  (logically, with the &gt;&gt;&gt; operator) by the absolute value of
     *  the second argument. If the second argument is 0, no operation
     *  is performed (the array is just copied).
     *
     *  @param array A first array of longs.
     *  @param shiftAmount The amount to shift by, positive for left shift,
     *  negative for right shift.
     *  @return A new array of longs.
     */
    public static final long[] shiftLogical(long[] array, int shiftAmount) {
        long[] returnValue = new long[array.length];

        if (shiftAmount >= 0) {
            for (int i = 0; i < array.length; i++) {
                returnValue[i] = array[i] << shiftAmount;
            }
        } else if (shiftAmount < 0) {
            for (int i = 0; i < array.length; i++) {
                returnValue[i] = array[i] >> -shiftAmount;
            }
        }

        return returnValue;
    }

    /** Return a new array that is the element-by-element difference of the
     *  two input arrays, i.e. the first array minus the second array
     *  (array1[i] - array2[i]).
     *  If the lengths of both arrays are 0, return a new array of length 0.
     */
    public static final long[] subtract(final long[] array1, final long[] array2) {
        int length = _commonLength(array1, array2, "LongArrayMath.subtract");
        long[] returnValue = new long[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array1[i] - array2[i];
        }

        return returnValue;
    }

    /** Return the sum of the squares of all of the elements in the array.
     *  This is equivalent to the square of the L2-norm of the array.
     *  Return 0L if the length of the array is 0.
     */
    public static final long sumOfSquares(long[] array) {
        long sum = 0L;

        for (long element : array) {
            sum += element * element;
        }

        return sum;
    }

    /** Return a new array that is formed by converting the long numbers in
     *  the argument array to complex numbers. Each complex number has
     *  real part equal to the value in the argument array and a zero
     *  imaginary part.
     *
     *  @param array An array of long numbers.
     *  @return A new array of complex numbers.
     */
    public static final Complex[] toComplexArray(final long[] array) {
        int length = array.length;
        Complex[] returnValue = new Complex[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = new Complex(array[i], 0.0);
        }

        return returnValue;
    }

    /** Return a new array that is formed by converting the longs in
     *  the argument array to doubles.  If the length of the argument
     *  array is 0, return a new array of length 0.
     *
     *  @param array An array of long.
     *  @return A new array of doubles.
     */
    public static final double[] toDoubleArray(final long[] array) {
        int length = array.length;
        double[] returnValue = new double[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i];
        }

        return returnValue;
    }

    /** Return a new array that is formed by converting the longs in
     *  the argument array to doubles.
     *  If the length of the argument array is 0,
     *  return a new array of length 0.
     *  @param array An array of long.
     *  @return A new array of doubles.
     */
    public static final float[] toFloatArray(final long[] array) {
        int length = array.length;
        float[] returnValue = new float[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = array[i];
        }

        return returnValue;
    }

    /** Return a new array that is formed by converting the longs in
     *  the argument array to integers.
     *  If the length of the argument array is 0,
     *  return a new array of length 0.
     *  @param array An array of long.
     *  @return A new array of integers.
     */
    public static final int[] toIntegerArray(final long[] array) {
        int length = array.length;
        int[] returnValue = new int[length];

        for (int i = 0; i < length; i++) {
            returnValue[i] = (int) array[i];
        }

        return returnValue;
    }

    /** Return a new String representing the array, formatted as
     *  in Java array initializers.
     */
    public static final String toString(final long[] array) {
        return toString(array, ", ", "{", "}");
    }

    /** Return a new String representing the array, formatted as
     *  specified by the ArrayStringFormat argument.
     *  To get a String in the Ptolemy expression language format,
     *  call this method with ArrayStringFormat.exprASFormat as the
     *  format argument.
     */
    public static final String toString(final long[] array,
            String elementDelimiter, String vectorBegin, String vectorEnd) {
        int length = array.length;
        StringBuffer sb = new StringBuffer();

        sb.append(vectorBegin);

        for (int i = 0; i < length; i++) {
            sb.append(Long.toString(array[i]));

            if (i < length - 1) {
                sb.append(elementDelimiter);
            }
        }

        sb.append(vectorEnd);

        return new String(sb);
    }

    /** Return true if all the distances between corresponding elements
     *  <i>array1</i> and <i>array2</i> are all less than or equal to
     *  the corresponding elements in <i>maxError</i>. If both arrays
     *  are empty, return true. If <i>maxError</i> is negative, return
     *  false.
     *
     *  @param array1 The first array.
     *  @param array2 The second array.
     *  @param maxError The threshold for the magnitude of the difference.
     *  @return True if all the distances between corresponding elements
     *  <i>array1</i> and <i>array2</i> are all less than or equal to
     *  the corresponding elements in <i>maxError</i>.
     *  @exception IllegalArgumentException If the arrays are not of the same
     *   length.
     */
    public static final boolean within(final long[] array1,
            final long[] array2, long maxError) {
        int length = _commonLength(array1, array2, "LongArrayMath.within");

        for (int i = 0; i < length; i++) {
            if (array1[i] > array2[i] + maxError
                    || array1[i] < array2[i] - maxError) {
                return false;
            }
        }

        return true;
    }

    /** Return true if all the distances between corresponding elements
     *  <i>array1</i> and <i>array2</i> are all less than or equal to
     *  the corresponding elements in <i>maxError</i>. If both arrays
     *  are empty, return true. If any element of <i>maxError</i> is
     *  negative, return false.
     *
     *  @param array1 The first array.
     *  @param array2 The second array.
     *  @param maxError The array of thresholds for the magnitudes of
     *   the difference.
     *  @return True if all the distances between corresponding elements
     *  <i>array1</i> and <i>array2</i> are all less than or equal to
     *  the corresponding elements in <i>maxError</i>.
     *  @exception IllegalArgumentException If the arrays are not of the same
     *   length.
     */
    public static final boolean within(final long[] array1,
            final long[] array2, long[] maxError) {
        int length = _commonLength(array1, array2, "LongArrayMath.within");

        for (int i = 0; i < length; i++) {
            if (array1[i] > array2[i] + maxError[i]
                    || array1[i] < array2[i] - maxError[i]) {
                return false;
            }
        }

        return true;
    }

    ///////////////////////////////////////////////////////////////////
    ////                         protected methods                 ////

    /** Throw an exception if the two arrays are not of the same length,
     *  or if either array is null. An exception is NOT thrown if both
     *  arrays are of length 0. If no exception is thrown, return the common
     *  length of the arrays.
     *  @param array1 The first array of longs.
     *  @param array2 The second array of longs.
     *  @param methodName A String representing the method name of the caller,
     *  without parentheses.
     *  @return The common length of both arrays.
     */
    protected static final int _commonLength(final long[] array1,
            final long[] array2, String methodName) {
        if (array1 == null) {
            throw new IllegalArgumentException("ptolemy.math." + methodName
                    + "() : first input array is null.");
        }

        if (array2 == null) {
            throw new IllegalArgumentException("ptolemy.math." + methodName
                    + "() : second input array is null.");
        }

        if (array1.length != array2.length) {
            throw new IllegalArgumentException("ptolemy.math." + methodName
                    + "() : input arrays must have the same length, "
                    + "but the first array has length " + array1.length
                    + " and the second array has length " + array2.length + ".");
        }

        return array1.length;
    }
}
