//
//  main.c
//  practise001
//
//  Created by JustinHu on 28/08/2017.
//  Copyright © 2017 JustinHu. All rights reserved.
//

#include <stdio.h>  /*stand input/output header*/

int main(void) {
    int num;
    num = 1;
    
    printf("I am a simple");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);
    
    return 0;
}

/* ---------------------------------------------
 #include Directives and Header Files
 
 a cut-and-paste operation.
 The #include statement is an example of a `C preprocessor directive`(c预处理指令).
 preprocessor: C compilers perform some preparatory work on source code before compiling.
 
 stdio.h file: (stand input/output header)
    - contains information about input and output functions for the compiler to use.
 header: information that goes at the top of a file. C implementations typically come with several header files.
    - header files contain information used by the compiler to build the final executable program.
    - But the actual code for a function is in a library file of precompiled code, not in a header file.
    - The linker component of the compiler takes care of finding the library code you need.
    - In short, header files help guide the compiler in putting your program together correctly.
 
 ANSI/ISO C has standardized which header files a C compiler must make available.
    - the documentation for a particular C implementation shoud include a description of the functions in the C library, these function descriptions identify which header files are needed.
 
 The `#` symbol in column 1: identifies the line as one to be headled by the C preprocessor before the compiler takes over.
 */


/* ---------------------------------------------
 The `main()` Function
 
 int main(void)
    - proclaims a function by the name of `main`
    - A C program always begins execution with the function called `main()`
    - You are free to choose name for other functions you use. But `main()` must be there to start things.
    - int: int means that this function is supposed to return an integer.
 
    parentheses:
        - identify `main()` as a function.
        - generally enclose information being passed along to the function.
        - `void` means nothing is being passed along.
 
    - functions are the basic modules of a C program.
 
 -stick to the standard form
 */

/* ---------------------------------------------
 Comments
 
 - C99 add a new form of comment: `//`, single line comment
 */

/* ---------------------------------------------
 Braces, Bodies, and Blocks
 
 {...}

 - In general, all C functions use braces to mark the beginning as well as the end of the body of a function.
 - Braces can also be used to gather statements within a function into a unit or block.
 */

/* ---------------------------------------------
 Declarations
 
 int num;
    - a declaration statement.
    - this example decalres two things. 
        - First, somewhere in the function, you have a variable called num.
        - Second, the `int` proclaims `num` as an integer. The compiler uses this information to arrange for suitable storage space in memory for the `num` variable.
    - semicolon: indentifies the line as a C statement or instruction. This is part of the statement (not just a sparator).
 
    - int: a C keyword, indentifying one of the basic C data types.
    - the word `num` in this example is an identifer.
 
 - the decalartion connects a particular identifer with a particular location in computer memory, and it also establishes the type of information, or data type, to be stored at that location.
 
 - In C, all variables must be declared before they are used.
 
 - In old tradition, C has required that variables be declared at the beginning of a block with no other kind of statement allowd to come before any of the declaration.
 - C99 and C11, following the practice of C++, let you place declarations about anywhere in a block (but still before use).
 
 Data Types: 
    - see next chapter.
 
 Name Choice:
    - You should use meaningful names(identifiers) for variables. 
    - If the name doesn't suffice, use comments to explain what the variables represent.
    - The characters at your disposal are : 
        - lowercase letters
        - uppercase letters
        - digits
        - underscore(_)
    - The first character must be a letter or an underscore.
    - Case sensitive.
    - Operating systems and the C library often use identifiers with one or two initial underscore characters, so it is better to avoid that usage.
    - The standard labels beginning with one or two underscore characters, such as library indentifiers, are reserved. (although it is not a syntax error to use them, it could lead to name comflicts).
    - Universal Character Names: C99 and C11 make an extensive set of characters available for use. See 'Expanded Character Support'
 
 Four Reasons to Declare Variables:
    - Putting all the variables in one place makes it easier for a reader to grasp what the program is about.
        - This is particularly true if you give your variables meaningful names.
        - If the name doesn’t suffice, use comments to explain what the variables represent.
        - Documenting a program in this manner is one of the basic techniques of good programming.
    - Thinking about which variables to declare encourages you to do some planning before plunging into writing a program. 
    - Declaring variables helps prevent one of programming’s more subtle and hard-to-find bugs—that of the misspelled variable name.
        - if you misspell a variable in later use, non-declaration languages will create a new variable for it, which will cause error and hard to find. 
        - if you use a language that need declare a variable before use it like C, the compiler will complain when a undeclared identifier shows up.
    - Your C program will not compile if you don’t declare your variables.
 
 */


/* ---------------------------------------------
 Assignment
 
 num=1;
    - a assignment statement.
 */


/* ---------------------------------------------
 The printf() Function
 
 printf("I am a simple");
 printf("computer.\n");
 printf("My favorite number is %d because it is first.\n", num);
    - parentheses: signify that printf is a function name.
    - argument: The material enclosed in the parentheses is information passed from the main() function to the printf() function.
        - actual argument: a specific value sent to a function;
        - formal argument: a variable in the function used to hold the value. (See Chapter 5)
    - When the program reaches this line, control is turned over to the named function (printf() in this case). When the function is finished with whatever it does, control is returned to the original (the calling) function —- main(), in this example.
 
 "\n":
    - newline character, start a new line.
    - Why not use [Enter]?
        - That would be interpreted as an immediate command to your editor, not as an instruction to be stored in your source code.
        - when you press the [Enter] key, the editor quits the current line on which you are working and starts a new one.
        - The newline character, however, affects how the output of the program is displayed.
 
    - escape sequence(转义序列):
        - used to represent difficult- or impossible-to-type characters, begin with the backslash character "\".
        - Examples:
            - \t for [Tab]
            - \b for [Backspace]
 
 "%d":
    - a placeholder to show where the value of `num` is to be printed.
    - `%`: the % alert the program that a variable is to be printed at that location.
    - `d`: print the variable as a decimal (base 10) integer.
 
 - The printf() function allows several choices for the format of printed variables, including hexadecimal (base 16) integers and numbers with decimal points.
 - the "f" in printf() is a reminder that this is a formatting print function.
    - Each type of data has its own specifier.
 
 */


/* ---------------------------------------------
 Return Statement
 
 return 0;
 
    - The `int` in `int main(void)` means this function is supposed to return an integer.
    - The C standard requires that main() behave that way.
    - If you leave out the return statement for `main()`, the program will return 0 when it reaches the closing `}`. So you can omit the return statement at the end of main().
    - However, you can’t omit it from other functions. (so it’s more consistent to use it in main(), too).
 */


















