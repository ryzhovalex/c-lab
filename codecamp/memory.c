#include <stdio.h>
#include <stdlib.h>


int main() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    
    printf("%p\n", &age); // access to memory address where variable is stored

    return 0;
}