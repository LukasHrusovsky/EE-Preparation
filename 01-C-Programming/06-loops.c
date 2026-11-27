#include <stdio.h>

int main() {

    // Gets the sum of all odd numbers from 1 to 99
    int sum = 0;
    for (int i = 1; i < 100; i += 2) {
        sum += i;
    }
    printf("%d\n", sum);

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = 10;

    // Condition is checked BEFORE the first ireration
    while (count > 0) {

        int result = num * count;

        printf("%d * %d = %d\n", num, count, result);
        count --;
    }

    // ondition is checked AFTER the first iteration
    do {
        printf("This still runs once even though the condiion is false");
    } while (1 > 2);

    return 0;
}