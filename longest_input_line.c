/* Program to print longest input line. */
#include <stdio.h>
#define MAXLINE 1000  // Maximum input line size.


int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char s[], int slen);


main() {
    /* Print longest input line. */
    int len;  // Current line length.
    int max;  // Max len seen so far.
    int slen;  // Length of longest array to propagate to reverse function.
    char line[MAXLINE];
    char longest[MAXLINE];  // Longest line saved here.

    max = 0;
    // I think this loop will stop only after EOF, since even hitting
    // `enter` key in input producing `\n` char,
    // so returned length above 0.
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {  // Ensure that there was a line.
        printf("%s", longest);
    }

    return 0;
}


int get_line(char s[], int lim) {
    /* Read a line from input into given array `s` and return its length. */
    int c, i;

    // Read input until EOF or line ending.
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
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


void copy(char to[], char from[]) {
    /* Copy `from` into `to` checking it's big enough. */
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}


void reverse(char s[], int slen) {
    /* Reverse given char array.

    WARNING: This function doesn't work on fixed-size arrays since `slen` produced from `sizeof()` function counts whole size (in case of this program 1000) which 
    contain empty spaces and how to truncate it i still haven't understood.

    Don't calculate parameter-array len within function: https://stackoverflow.com/a/10349610/14748231.
    */
    int i, j;
    char inter[MAXLINE];  // Inter array to collect reversed array.

    j = 0;
    // Collect inter array.
    for (i = slen-1; i >= 0; i--) {
        printf("%c\n", s[i]);
        inter[j] = s[i];
        j++;
    }
    // Convert inter to origin array.
    for (i = 0; i < slen; i++) {
        s[i] = inter[i];
    }
}

