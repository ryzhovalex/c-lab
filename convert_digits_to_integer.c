#include "stdio.h"


int main() {
    int a;
    a = atoi("20200");
    printf("%d\n", a);
    return 0;
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