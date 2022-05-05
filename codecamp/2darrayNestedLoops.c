#include <stdio.h>
#include <stdlib.h>


int main() {
    // 2d array
    int nums[3][4] = { // 3 == vertical length, 4 == horizontal length
        {1, 2, 8, 5},
        {5, 6, 9, 7},
        {7, 2, 1, 3}
    };
    // printf("%d\n", nums[2][3]);

    // nested loops
    // print all elements of an 2d array
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}