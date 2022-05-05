#include <stdio.h>
#include <stdlib.h>


int main() {
    int index = 1;

    while (index <= 5) {
        index++;
        printf("Hello!\n");
    }

///////////////////////////

    int index2 = 6;

    do {
        index2++;
        printf("Hello with DO!\n"); // this will be called ONCE, because when we're using do...while, program checks while ...
        // ... condition after performing and operation
    } while (index2 <= 5);

    return 0;
}