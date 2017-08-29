//
//  main.c
//  chapter-3 Data and C
//
//  Created by JustinHu on 29/08/2017.
//  Copyright © 2017 JustinHu. All rights reserved.
//

#include <stdio.h>

/* -------------------------------
 - Keywords:
    - int, short, long, unsigned, char, float, double, _Bool, _Complex, _Imaginary
 - Operator
    - sizeof
 - Function
    - scanf()
 - The basic data types that C uses
 - The distinctions between integer types and floating-point types
 - Writing constants and declaring variables of those types
 - How to use the printf() and scanf() functions to read and write values of different types
 
 - in this chatper, you practice manipulating data, not just read data.
 */

// Sample Program
/* paltinum.c -- your weight in platinum */
#include <stdio.h>
int main(void){
    float weight;   // user weight
    float value;    // platinum equivalent
    
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    
    // get input from the user
    scanf("%f", &weight);
    // assume platinum is $1700 per ounce
    // 14.5833 converts pounds avd. to ounce tory
    value = 1700.0 * weight * 14.5833;
    
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}

/* -----------------------------------------------
 About the sample program:
 
 scanf("%f", &weight);
    - provide keyboard input to the program.
    - `%f`: instructs scanf() to read a floating-point number from the keyboard
    - `&weight`: tells scanf() to assign the input value to the variable name `weight`.
        `&`: scanf() function use the `&` notation to indicate where it can find the `weight` variable. (See more in next chapter)
 
 printf("Your weight in platinum is worth $%.2f.\n", value);
    - `%.2f`: 
        - use the %f specifier in the printf() code to handle a floating-point value. 
        - The .2 modifier to the %f specifier fine-tunes the appearance of the output so that it displays two places to the right of the decimal.
 
 -  The scanf() and printf() functions enable you to establish a two-way communication with your computer.
 */



/* -----------------------------------------------
 Data Variables and Constants
 
 constant: 
    - types of data are preset before a program is used and keep their values unchanged throughout the life of the program.
 variable:
    - types of data may change or be assigned values as the program runs.
 */

/* -----------------------------------------------
 Data: Data-Type Keywords
 
 C Data Keywords:
    - int
    - long
    - short
    - unsigned
    - char
    - float
    - double
    [C90]
    - signed
    - void
    [C99]
    - _Bool
    - _Complex
    - _Imaginary
 
    The types created with these keywords can be divided into two families on the basis of how they are stored in the computer:
        - integer types
        - floating-point types
 
 Bits, Bytes and Words
    - bit: the smallest unit of memory.
    - byte: usual unit of computer memory, 8 bits.
    - word: natural unit of memory for a given computer design.
        - For 8-bit microcomputer, a word is just 8 bits.
        - Since then, personal computers moved up to 16-bit words, 32-bit words, and, at the present, 64-bit words. Larger word sizes enable faster transfer of data and allow more memory to be accessed.
 
 Integer vs Floating-Point Types
    Integer
        - In C, an integer is never written with a decimal point.
    Floating-Piont Number
        - adding a decimal point can makes a value a floating-point value. For example: 7 is an integer type but 7.00 is a floating-point type.
        - e-notation: 3.16E7 = 3.16*10^7
        
        - store: Floating-point representation involves breaking up a number into a fractional part and a exponent part.
            - so, 7.00 would not be stored in the same manner as the integer 7, even though both have the same value.
            - The decimal analogy would be to write 7.0 as 0.7E1, 0.7 is the fractional part, and the 1 is the exponent part. (A computer would use binary numbers and powers of two instead of powers of 10 for internal storage. See more in Chapter 15).
    practical differences:
        - An integer has no fractional part; a floating-point number can have a fractional part.
        - Floating-point numbers can represent a much larger range of values than integers can.
        - For some arithmetic operations, such as subtracting one large number from another, floating-point numbers are subject to greater loss of precision.
        - computer floating-point numbers can't represent all the values in a range. Instead, floating-point valus are often approximations  of a true value. (Because there is an infinite number of real numbers in any range.)  For example, 7.0 might be stored as a 6.99999 float value.
        - Floating-point operations were once much slower than integer operations. However, today many CPUs incorporate floating-point processors that close the gap.
 
 
 3.4 Basic C Data Types
 
    3.4.1 int
        - C integer types vary in the range of values offered and in wherher negative numbers can be used.
 
        - int:
            - the int type is a signed integer, can be positive, negative or zero.
            - The range in possible values depends on the computer system.
            - Typically, an int uses one machine word for storage.
                - if word is 16-bit, will allow a range in values from -32768 to 32767.
                - now the personal computer have 64-bit processors, so the range is huge.
            - ISO C specifies that the minimum range for type int should be from -32768 to 32767.
            - systems represent signed integers by using the value of a particular bit to indicate the sign.(Chapter 15)
 
        - Declare an int variable
 
 
 */





























