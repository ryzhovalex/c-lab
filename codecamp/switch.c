#include <stdio.h>
#include <stdlib.h>


int main() {
    char grade = 'A';

    switch(grade) {
        case 'A':
            printf("Yeah!\n");
            break;
        case 'B':
            printf("Noo!\n");
            break;
        default:
            printf("Hmmm...\n");
    }

    return 0;
}