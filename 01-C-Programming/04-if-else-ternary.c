#include <stdio.h>

int main() {

    // Ask the user for their age, and evaluate thier eligibility for driving
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 120 || age < 0) {
        printf("Invalid input\n");
        return 1;
    } else if (age >= 16) {
        printf("You are eligible to get a driver license\n");
    } else if (age >= 15) {
        printf("You are eligible to get a driver permit\n");
    } else {
        printf("Sorry, please come back later\n");
    }

    // Ternary operator syntax: test_condition ? expression1 (executes if true) : espression2 (executes if false)
    (age >= 65) ? printf("You are eligible for Medicare\n") : printf("You are not eligible for Medicare\n");

    char operator = '+';
    int a = 5;
    int b = 6;
    int result = (operator == '+') ? (a + b) : (a - b); // Ternary operator stores final value of executed expression

    // Evaulatues if a is even or odd
    (a % 2 == 0) ?
        printf("Even") :
        printf("Odd");

    return 0;
}