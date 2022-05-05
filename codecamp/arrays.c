#include <stdio.h>
#include <stdlib.h>


int main() {
	// define an array
	int luckyNumbers[] = {4, 8, 16, 22, 145};
	luckyNumbers[1] = 200; // set certain value
	printf("%d\n", luckyNumbers[1]); // print certain value
	int blankNumbers[10]; // define array without elements and restrict length to 10
	printf("%d\n", blankNumbers[5]); // => 0

	// NOTE: strings in C is also an arrays, but of characters
	char beer[20] = "Baltika";

	return 0;
}


