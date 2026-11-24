#include <stdio.h>

int main() {

    int intNumber = 67;
    double doubleNumber = 67.0;
    float floatNumber = 67.0f; // Use 'f' suffix to indicate a float
    double expNumber = 6.7e5; // Storing exponential number in a double variable
    char character = 'c';

    printf("Int Number:%d\n", intNumber);
    printf("Double Number: %lf\n", doubleNumber);
    printf("Double Number Truncated: %.1lf\n", doubleNumber); // ".1" after "%" to truncate to 1 digit after decimal point
    printf("Float Number: %f\n", floatNumber);
    printf("Exponential Number: %lf\n:", expNumber);

    printf("Character: %c\n", character);
    printf("Character: %d\n", character); // Print int value of character

    // Use %zu for size of variable type
    printf("Size of int: %zu ", sizeof(intNumber));
    printf("Size of double : %zu ", sizeof(doubleNumber));
    printf("Size of float: %zu ", sizeof(floatNumber));
    printf("Size of char: %zu\n", sizeof(character));

    

    int age;
    double balance;
    char favChar;

    // Prompt the user to enter their age, balance, and favorite character
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your balance: ");
    scanf("%lf", &balance);

    printf("Enter your favorite character: ");
    scanf(" %c", &favChar); // Space before %c to consume any leftover whitespace (like enter key from previous input)

    printf("Age: %d\n", age);
    printf("Balance: %.2lf\n", balance);
    printf("Favorite Character: %c\n", favChar);

    // Take multiple inputs in a single line
    printf("Enter multple values: ");
    scanf("%d %lf %c", &age, &balance, &favChar);

    return 0;
}