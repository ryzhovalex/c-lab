#include <stdio.h>
#include <stdlib.h>


int main() {
    double num1;
    double num2;
    double result;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    /*
    During test experiments, seems like we need " %c" with leading space before '%c' because when we request for an input
    above 'scanf' function with '%c' and hit enter to register it, we get enter registered in 'scanf' with '%c' too... so seems
    like leading space prevent this type of behaviour
    */
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num1;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        printf("Invalid Operator!");
        return 0;
    }

    printf("Result: %f\n", result);

    return 0;
}