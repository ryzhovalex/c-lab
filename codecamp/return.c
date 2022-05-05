#include <stdio.h>
#include <stdlib.h>


double cube(double num) { // it's important to place function 'cube' above function 'main' or we get an error
    double result = num * num * num;
    return result;
}

int main() {
    printf("Answer: %f\n", cube(3.0));

    return 0;
}
