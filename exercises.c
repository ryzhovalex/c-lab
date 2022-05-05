/* exs collection program.

Implements solutions to all exs presented in the book. */
#include <stdio.h>


int strlen(char s[]) {
    /* Return length of given string. */
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;

    return i;
}


int atoi(char s[]) {
    /* Convert given string to integer. */
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}


int lower(char c) {
    /* Return lowercase given char. */
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}


int main() {
    printf("%d\n", ex2_3("0x7fb994bcd510"));
    return 0;
}


int ex2_3(char s[]) {
    /* Convert given string of hexadecimal digits (including `0x` or `0X`) into its equivalent integer value.
    
    Allowed hex chars 0-9, A-F, a-f.
    
    How to calculate hexadecimal to decimal: https://www.binaryhexconverter.com/hex-to-decimal-converter.
    */
    int result = 0;
    int number_to_power = 0;
    int power = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        // i > 1 because we don't need to count `0x`.
        for (int i = strlen(s) - 1; i > 1; i--) {
            if (isdigit(s[i])) {
                number_to_power = s[i] - '0';
            } else if (lower(s[i]) == 'a') {
                number_to_power = 10;
            } else if (lower(s[i]) == 'b') {
                number_to_power = 11;
            } else if (lower(s[i]) == 'c') {
                number_to_power = 12;
            } else if (lower(s[i]) == 'd') {
                number_to_power = 13;
            } else if (lower(s[i]) == 'e') {
                number_to_power = 14;
            } else if (lower(s[i]) == 'f') {
                number_to_power = 15;
            }
            result = result + number_to_power * pow(16, power);
            power++;
        }
    }

    return result;
}


int ex2_2(char s[], int lim) {
    /* Write a loop equivalent for the for loop below without using && or || operators
    ```c
    for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
        s[i] = c; 
    ```

    This function similar to longest_input_line.c/get_line().
    - Read a line from input into given array `s` and return its length.
    */
    int c, i;

    for (i=0; c=getchar() != '\n'; ++i) {
        printf("%d ", i);
        if (i < lim-1) {
            if (c != EOF) {
                s[i] = c;
            } else {
                break;
            }
        } else {
            break;
        }
    }
        
    // Do additional checking and assignment after breaking `for` loop.
    if (c == '\n') {
        s[i] = c;
        i++;
    }

    // Put the null character at the end of the array,
    // to mark the end of the string of characters.
    s[i] = '\0';

    return i;
}


void ex1_1() {
    /* Run the "hello, world" program on your system. 
    Experiment with leaving out parts of the program, to see what error messages you get. */
    printf("hello, world\n");
}


void ex1_2() {
    /* Experiment to find out what happens when prinf's argument string contains '\c', where 'c' is some character not listed above. */
    // printf("hello, world\j");
    // => warning: unknown escape sequence: '\j'
    return 0;
}


void ex1_3() {
    /* Modify the temperature conversion program to print a heading above the table. */
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  // Lower limit of temperature table
    upper = 300;  // Upper limit of temperature table
    step = 20;  // Step size of temperature table

    fahr = lower;  // Start from 0 according Fahrenheit range

    printf("Fahr    Celsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);  
        fahr = fahr + step;
    }
}


void ex1_4() {
    /* Write a program to print the corresponding Celsius to Fahrenheit. */
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  // Lower limit of temperature table
    upper = 300;  // Upper limit of temperature table
    step = 20;  // Step size of temperature table

    fahr = lower;  // Start from 0 according Fahrenheit range

    printf("Celsius Fahr\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%6.1f\t%3.0f\n", celsius, fahr);  // Just swap celsius and fahr 
        fahr = fahr + step;
    }
}


void ex1_5() {
    /* Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. */
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)  // All is needed to change initialization, condition and incrementation to reverse order
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}


void ex1_6() {
    /* Verify that the expression `getchar() != EOF` if 0 or 1. */
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);  // => 1, so expression really = 0 or 1
}


void ex1_7() {
    /* Write a program to print the value of EOF. */
    int c;
    // To send EOF value:
    // on Windows: Ctrl + Z
    // on Linux: Ctrl + D
    if ((c = getchar()) == EOF) {
        printf("%d\n", c);  // => -1
    }
}