#include <stdio.h>
#include <math.h>
#define PI 3.14159265359


int main() {
    ex8(1);
    return 0;
}


void ex8(int src_days) {
    /* Write a C program to convert specified days into years, weeks and days. */
    int years, weeks, days, rest_days;

    years = src_days / 365;
    weeks = (src_days % 365) / 7;
    days = src_days % 365 % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
}


void ex7() {
    /* Write a C program to display multiple variables. */
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("a + c: %d\n", a + c);
    printf("x + c: %f\n", x + c);
    printf("dx + x: %f\n", dx + x);
    printf("(int)dx + ax: %d\n", (int)dx + ax);
    printf("a + x: %f\n", a + x);
    printf("s + b: %hd\n", s + b);
    printf("ax + b: %d\n", ax + b);
    printf("s + c: %hd\n", s + c);
    printf("ax + c: %ld\n", ax + c);
    printf("ax + ux: %lu\n", ax + ux);
}


void ex6(int radius) {
    /* Write a C program to compute the perimeter and area of a circle with a given radius. */
    printf("Perimeter: %f\n", 2 * PI * radius);
    printf("Area: %f\n", PI * pow(radius, 2));
}


void ex5(int width, int height) {
    /* Write a C program to compute the perimeter and area of a rectangle with
    a height of 7 inches. and width of 5 inches. */
    printf("Perimeter: %d\n", 2 * (width + height));
    printf("Area: %d\n", width * height);
}


void ex4(char c1, char c2, char c3) {
    /* Write a C program to print the following characters in a reverse way. */
    printf("%c%c%c\n", c3, c2, c1);
}


void ex3() {
    /* Write a C program to print a block F using hash (#), where the F has a height of six characters 
    and width of five and four characters. And also to print a big 'C'. */
    printf("######\n");
	printf("#\n");
	printf("#\n");
	printf("#####\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
    printf("\n");
    printf("    ######\n");
    printf("  ##      ##\n");
    printf(" #\n");
    printf(" #\n");
    printf(" #\n");
    printf(" #\n");
    printf(" #\n");
    printf("  ##      ##\n");
    printf("    ######\n");

	return(0);
}


void ex2() {
    /* Write a C program to get the C version you are using. */
    if (__STDC_VERSION__ >= 201710L)
        printf("We are using C18!\n");
    else if (__STDC_VERSION__ >= 201112L)
        printf("We are using C11!\n");
    else if (__STDC_VERSION__ >= 199901L)
        printf("We are using C99!\n");
    else
        printf("We are using C89/C90!\n");
}


void ex1() {
    /* Write a C program to print your name, date of birth. and mobile number. */ 
    char name[] = "Max Kudr";
    char dob[] = "August 28";
    char mobile[] = "888-basik";

    printf("Name\t: %s\n", name);
    printf("DOB\t: %s\n", dob);
    printf("Mobile\t: %s\n", mobile);
}
