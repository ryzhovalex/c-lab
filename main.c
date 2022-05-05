/* Main book representing program.

Contains various solutions in C language presented in the book. */
#include <stdio.h>  // Include information about standard library

#define LOWER   0   /* lower limit of table */
#define UPPER   0   /* upper limit of table */
#define STEP    0   /* step size */


int test_char_value(char c);


main() {
    printf("%d\n", (unsigned int)((1*1103515245+12345)/65536) % 32768);
    return 0;
}


int test_char_value(char c) {
    return c - '0';
}


void print_eof_value() {
    /* Task: Write a program to print the value of EOF. */
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    printf("%d\n", c);  // EOF = -1
}


void fahrenheit_celsius() {
    /* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
    float fahr, celsius;
    int lower, upper, step;

    fahr = lower;  // Start from 0 according Fahrenheit range
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);

        // %3.0f -> print at least 3 characters wide, with no decimal point and no fraction digits.
        // %6.1f -> six characters wide, with 1 digit after the decimal point.
        printf("%3.0f\t%6.1f\n", fahr, celsius);  
        /* Wide restriction operands:
            %d          as decimal integer
            %6d         as decimal integer, at least 6 characters wide
            %f          as floating point
            %6f         as floating point, at least 6 characters wide
            %.2f        as floating point, 2 characters after decimal point
            %6.2f       as floating point, at least 6 wide and 2 after decimal point 
        */

        fahr = fahr + step;
    }
    // While loop can be a single statement without braces:
    // while (i < j) 
    //     i = 2 * i;
} 


void fahrenheit_celsius_v2() {
    /* Print Fahrenheit-Celsius table with "for" loop. */
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


void copy_input_to_output() {
    /* Copy program's input to output one character at a time. */
    int c;

    while ((c = getchar()) != EOF) {  // Assign and check in one body
        putchar(c);
    }
}
