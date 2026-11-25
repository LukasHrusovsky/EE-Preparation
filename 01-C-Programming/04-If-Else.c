#include <stdio.h>

int main() {

    // Ask the user for their age, and evaluate thier eligibility for driving
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 16) {
        printf("You are eligible to get a driver license\n");
    } else if (age >= 15) {
        printf("You are eligible to get a driver permit\n");
    } else {
        printf("Sorry, please come back later\n");
    }

    return 0;
}