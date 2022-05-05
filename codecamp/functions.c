#include <stdio.h>
#include <stdlib.h>


int main() {
	sayHi("Max", 25);

	return 0;
}


// 'void' functions don't return any information by 'return' statement
void sayHi(char name[], int age) { // push arguments to function
	printf("Hello %s, you are %d!\n", name, age);
}