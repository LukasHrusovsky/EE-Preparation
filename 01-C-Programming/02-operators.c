#include <stdio.h>

int main() {

    int a = 10;
    int b = 5;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Remainder %d\n", a % b); // Remainder operator only used with integer data types

    // Oparations using different data types
    double x = 5.34;
    int y = 2;

    printf("Division (x / y) : %.2lf\n", x / y);

    // Inrement and decrement operators
    int c = 10;
    printf("Increment: %d\n", ++c);
    printf("Decrement: %d\n", --c);

    // Multiple operations in a single line (PEMDAS)
    int result = (a - b) * (a + c);
    printf("Result: %d\n", result);

    return 0;
}