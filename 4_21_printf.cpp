// 4_21_printf

/*
    printf has this format: printf(format-control-string, zero or more arguments)

    format-control-string is always in double quotes
    It has zero or more conversion specifications and zero or more
character literals

    %e and %E print in scientific notation
    %f prints with a decimal point, with 6 digits by default
after the decimal point
    %g and %G print in scientific notation
    If the value is very large or very small, and fixed point otherwise

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Print string literal
    printf("Hello world!\n"); // Format control string has zero
    // conversion specifications, and 13 character literals

    // Print integers
    int num1 = 10;

    printf("num1 with the d specifier (decimal) is %d, 5 in decimal is %d\n",
            num1, 5);

    printf("num1 with the i specifier is %i, 5 in decimal is %d\n",
            num1, 5);

    printf("num1 with the u specifier is %u, 5 in decimal is %d\n",
            num1, 5);

    // print in octal (base 8)
    printf("num1 with the o specifier is %o, 5 in decimal is %d\n",
            num1, 5);

    // Hexadecimal
    printf("num1 with the x specifier is %x, 5 in decimal is %d\n",
            num1, 5);

    printf("num1 with the X specifier is %X, 5 in decimal is %d\n",
            num1, 5);

    // Floating points
    printf("\nFloating points\n");
    printf("1234567.89 with the %%e specifier is %e\n", 1234567.89);
    printf("1234567.89 with the %%f specifier is %f\n", 1234567.89);
    printf("1234567.89 with the %%g specifier is %g\n", 1234567.89);

    printf("0.000000123456789 with the %%e specifier is %e\n", 0.000000123456789);
    printf("0.000000123456789 with the %%f specifier is %f\n", 0.000000123456789);
    printf("0.000000123456789 with the %%g specifier is %g\n", 0.000000123456789);

    printf("123.456 with the %%e specifier is %e\n", 123.456);
    printf("123.456 with the %%E specifier is %E\n", 123.456);
    printf("123.456 with the %%f specifier is %f\n", 123.456);
    printf("123.456 with the %%g specifier is %g\n", 123.456);
    printf("123.456 with the %%G specifier is %G\n", 123.456);

    // Precision
    puts("Precision");
    printf("0.000000123456789 with the %%15.13f specifier is %15.13f\n", 0.000000123456789);
    printf("0.000000123456789 with the %%15.6f specifier is %15.6f\n", 0.000000123456789);

    // Chars and strings
    printf("\nChars and strings\n");
    printf("My char is %c\n", 'd');
    char c = 'a';
    printf("My char is %c\n", c);
    char myString[] = "Hi there";
    printf("%s\n", myString);

    // Pointer
    printf("\nPointers\n");
    int num = 5;
    printf("Address of num is %p\n", (void *) &num);

    return 0;
}