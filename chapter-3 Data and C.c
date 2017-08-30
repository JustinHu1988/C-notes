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
    
    
    int x = 100;
    
    printf("dec= %d; octal = %o, hex = %x\n", x,x,x);
    printf("dec= %d; octal = %#o, hex = %#x\n", x,x,x);
    /*
     this section will print:
     dec= 100; octal = 144, hex = 64
     dec= 100; octal = 0144, hex = 0x64
     */
    
    
    // Code Section 3.4
    unsigned int un = 3000000000; /* system with 32-bit int */
    short end = 200; /* and 16-bit short */
    long big = 65537;
    long long verybig = 12345678908642;
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    /*
     this section will print:
     un = 3000000000 and not -1294967296
     end = 200 and 200
     big = 65537 and not 1
     verybig = 12345678908642 and not 1942899938
     */
    
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
 3.2 Data Variables and Constants
 
 constant: 
    - types of data are preset before a program is used and keep their values unchanged throughout the life of the program.
 variable:
    - types of data may change or be assigned values as the program runs.
 */

/* -----------------------------------------------
 3.3 Data: Data-Type Keywords
 
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
  */


/* -----------------------------------------------
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
 
    - Declare, Assignment, Initializing
        - Declare an int variable
            - example: int erns; int hogs, cows, goats;
        - Assignment:
            - example: cows = 112;
        - Initializing:
            - example: int hogs = 21;
            - create and label the storage for the variables and assign starting value.
 
    - Type int Constants
        - when you write a number without a decimal point and without an exponent, C recongnizes it as an integer.
 
    - Printing int Values
        - `%d` notation is called a "format specifier", it indicates the form that `printf()` uses to display a value.
 
    - [・ˍ・*]
        If you make mistake on `printf()`:
        - example:
 
            #include <stdio.h>
            int main(void)
            {
            int ten = 10; int two = 2;
            printf("Doing it wrong: ");
            printf("%d minus %d is %d\n", ten ); // forgot 2 arguments
            return 0;
            }
        - This may print:
            Doing it wrong: 10 minus 16 is 1650287143
        - Note: the program used ten to provide a value for the first %d and used whatever values happened to be lying around in memory for the next two!
        - The number you get could be different from those shown here. Not only might the menory contents be different, but different compilers will manage memory locations differently.
 
    - Octal and Hexadecimal
        - special prefixes indicate which number base you are using.
        - Hexadecimal: prefix - `0x` or `0X`
        - Octal: prefix - `0`
 
        - different number systems don't affect how the number is stored.(binary code)
 
    - Displaying Octal and Hexadecimal
        - %o: for Octal;
        - %x: for Hexadecimal;
            
        - If you want to display the C prefixes: you can use `%#o`, `%#x` and `%#X` to generate the "0", "0x" and "0X" prefixes respectively.
            - note that the `0` and `0x` prefixes are not displayed in the output unless you include the `#` as part of the specifier.
 
 3.4.2 Other integer Types
 
    C offers three adjective keywords to modify the basic integer type:
        - short
        - long
        - unsigned
 
    Normally Range:
        - short = 16 bits
        - int = 16 bits or 32bits
        - long = 32 bits
        - long long = 64 bits
        
    Minimum range for each basic data type (C standard):
        - short/int:
            [–32,767 -- 32,767]
        - unsigned short/unsigned int:
            [0 -- 65,535]
        - long:
            [–2,147,483,647 -- 2,147,483,647]
        - unsigned long:
            [0 -- 4,294,967,295]
        - long long:
            [–9,223,372,036,854,775,807 -- 9,223,372,036,854,775,807]
        - unsigned long long:
            [0 -- 18,446,744,073,709,551,615]
 
    When use different int types?
        - If you are writing code on a machine for which int and long are the same size, and you do need 32-bit integers, you should use long instead of int so that the program will function correctly if transferred to a 16-bit machine.
        - use long long if you need 64-bit integer values.
        - saving storage space is important only if your program uses arrays of integers that are large in relation to a system’s available memory, Use short to save storage space.
        - Another reason to use short is that it may correspond in size to hardware registers used by particular components in a computer.
 
    Integer Overflow:
        - When it reaches its maximum value, it starts over at the beginning.
        - Example:
            int i = 2147483647;
            unsigned int j = 4294967295;
            printf("%d, %d, %d\n", i, i+1, i+2);
            printf("%d, %d, %d\n", j, j+1, j+2);
        - this will result:
            2147483647 -2147483648 -2147483647
            4294967295 0 1
 
    `long` Constants and `long long` Constants
        - Decimal Octal and hexadecimal constants are treated as type `int` unless the value is too large.
        - if the value is larger than int maximum, then the compiler tries in order `unsigned int` -> `long` -> `unsigned long` -> `long long` -> `unsigned long long`.
 
        - Sometimes you might want the compiler to store a small number as a long integer.
            - Example-1: Programming that involves explicit use of memory addresses on an IBM PC, for instance, can create such a need. []
            - Example-2: some standard C functions require type long values.
        - `l`/`L`: To cause a small constant to be treated as type `long`, you can append an `l` (lowercase L) or `L` as a suffix.
        - `ll`/`LL`: Similarly, you can use an `ll` or `LL` suffix to indicate a long long value.
        - `u`/`U`: unsigned.
 
    Printing `short`, `long`, `long long` and `unsigned` Types
        - `%u`: unsigned int
        - `%ld`: long int
        - `%lx`: long integer in hexadecimal format
        - `%lo`: long integer in octal format
        
        - [・ˍ・*]
            Note: although C allows both uppercase and lowercase letters for constant suffixes, these format specifiers use just lowercase.
        
    - Addtitional `printf()` formats
        - `%h`: short int
        - `%ho`: short integer in octal format
        - `%lu`: unsigned long type
        - `%lld`: signed long long type
        - `%llu`: unsigned long long type
 
        - Example: see Code Section 3.4
 
 
 
 
 */





























