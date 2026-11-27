#include <stdio.h>

int main() {

    char operator;
    int num1;
    int num2;

    double result;

    printf("Enter an operator [ '+', '-', '/', '*' ]: ");
    scanf(" %c", &operator);

    printf("Enter the first numer: ");
    scanf("%d", &num1);

    printf("Enter the second numer: ");
    scanf("%d", &num2);

    switch (operator)
    {
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '/':
        result = (double)num1 / num2;
        break;

        case '*':
        result = num1 * num2;
        break;
    
        default:
        printf("Invalid Input");
        break;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}