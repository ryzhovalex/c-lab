#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() { // this function called when program starts
	// int order = 1;
	// char name[20] = "John"; // '20' == how many characters in string
	// double points = 3.0;
	// char grade = 'A'; // we should use single quotation '' only for one char
	// char phrase[] = "Octopus Academy";
	// int favouriteNumber = 40;
	// const int id = 5769812350; // can't be modified!

	// /*
	// %s for text
	// %c for char
	// %d for integer
	// %f for decimal
	// */
	// printf("%d | Hello %s!\n", order, name);
	// printf("Your id is %d", id);
	// printf("Escape \"quotation\"\n");
	// printf("Your favourite number: %d\n", favouriteNumber);
	// printf("Your points %f\n", points);
	// printf("Your grade: %c\n", grade);

	// // getting user input
	// int age;
	// printf("Enter your age: ");
	// scanf("%d", &age); // ask user for an input, '&age' - it is a pointer (we need it for numbers or single chars)
	// printf("You are %d years old\n", age);
	// // but for decimal input we should use '%lf' instead of just '%f'
	// double gpa;
	// printf("Enter your gpa: ");
	// scanf("%lf", &gpa);
	// printf("Your gpa is %f\n", gpa);

	// // power
	// printf("Power 2^3: %f\n", pow(2, 3));

	// // ceil
	// printf("Ceil 22.33: %f\n", ceil(22.33));

	// // floor
	// printf("Floor 22.77: %f\n", floor(22.77));

	// grab whole line of input
	char dscr[200];
	printf("Enter some words about yourself: ");
	fgets(dscr, 200, stdin); // 'stdin' == standard input
	printf("Your description: %s\n", dscr);
	/*
	fgets() takes:
	1. value to write to
	2. max length of an input (if you wrote more, it will be trimmed)
	3. stdin parameter, which means 'standard output', but for what?
	*/

	return 0;
}