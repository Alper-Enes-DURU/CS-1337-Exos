#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num;
    unsigned int num2, num3;
    float flt1, flt2, flt3, flt;
    double doub;

    // Read in decimal, hex, and octal
    printf("Enter 3 numbers in decimal, hexadecimal and octal: ");
    scanf("%d%x%o", &num1, &num2, &num3);
    printf("Values in decimal are is %d, %d, %d\n", num1, num2, num3);

    // %i specifier
    printf("Enter a number in decimal, octal (prepend 0) or hex number (prepend 0x): ");
    scanf("%i", &num);
    printf("Value entered is %d\n", num);

    // Floating point: %e, %f, %g are interchangeable
    printf("Enter 3 floating point numbers: ");
    scanf("%e%f%g", &flt1, &flt2, &flt3);
    printf("flt1 = %f, flt2 = %f, flt3 = %f\n", flt1, flt2, flt3);

    // Mix various types
    printf("Enter an int, a float and a double: ");
    scanf("%d%f%lf", &num, &flt, &doub);
    printf("num = %d, flt = %f, doub = %lf\n", num, flt, doub);

    // Chars and strings
    char c;
    scanf("%c", &c); // Flush the buffer of the left over newline
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Char entered is %c\n", c);
    char myStr[10];
    printf("Enter a string: ");
    scanf("%s", myStr);
    printf("String entered is %s\n", myStr);

    // Use field width to limit the number of characters written
    // into the array, to avoid overflowing the array
    // Use of %n
    int count1, count2;
    printf("Enter a string, max 9 characters and an int: ");
    scanf("%9s%n%d%n", myStr, &count1, &num, &count2);
    printf("String entered is %s, int entered is %d\n", myStr, num);
    printf("%d chars have been entered after the string, and %d chars entered after the int\n",
           count1, count2);

    // Scanset
    char str[10];
    printf("Scanset is [aeiou], enter string: ");
    scanf("%c", &c); // Flush the buffer of the left over newline
    scanf("%[aeiuo]", str);
    printf("The input was \"%s\"\n", str);
}