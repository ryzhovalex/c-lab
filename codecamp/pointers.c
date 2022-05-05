#include <stdio.h>
#include <stdlib.h>


int main() {
    int age = 30;
    printf("age's memory address: %p\n", &age);
    // %p is to print out a pointer
    // pointer is just a type of data, memory address
    
    // create a pointer variable to store memory address
    int * pAge = &age; // 'pAge' is the name of pointer variable
    printf("%p\n", pAge);

    /////////////////////////
    // Dereferencing pointers
    /////////////////////////
    // we can dereference pointer 'pAge' to actual value of the variable
    printf("%d\n", *pAge); // => 30, actual value of variable 'age', because pointer pAge points at this value

    // has the same logic, we get a pointer of 'age', then we derefence to its value
    printf("%d\n", *&age);

    return 0;
}