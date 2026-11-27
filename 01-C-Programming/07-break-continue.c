#include <stdio.h>

int main() {
    
    int number;

    while(1) {

        printf("Enter a positive integer: ");
        int newChar;

        if (scanf("%d", &number) == 1){


            if ((newChar = getchar()) != '\n' && newChar != EOF) { // Checks for '\n' or EOF to get characters out of stdin and prevent infinite loops
                printf("Incorrect input, try again\n");

                while ((newChar = getchar()) != '\n' && newChar != EOF); // Checks for '\n' or EOF to get characters out of stdin and prevent infinite loops
                continue;
            }

            if(number <= 0) {
                printf("Only positive integers allowed, try again\n");
                continue;
            }
            break;
        } else {
            printf("Incorrect input, try again\n");

            while ((newChar = getchar()) != '\n' && newChar != EOF); // Checks for '\n' or EOF to get characters out of stdin and prevent infinite loops

        }


    }

    printf("Input: %d\n", number);

    return 0;
}