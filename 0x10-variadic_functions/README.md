stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.[1] It provides facilities for stepping through a list of function arguments of unknown number and type. C++ provides this functionality in the header cstdarg.

The contents of stdarg.h are typically used in variadic functions, though they may be used in other functions (for example, vprintf) called by variadic functions.Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is

Assignment

1. Write a function that returns the sum of all its parameters.
2. Write a function that prints numbers, followed by a new line.
3. Write a function that prints strings, followed by a new line.
4. Write a function that prints anything.
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored
~                                  
