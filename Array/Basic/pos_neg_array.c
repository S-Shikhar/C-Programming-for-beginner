/*
store 10 numbers (including positive and negative numbers) in a
Single Dimensional Array (SDA). Display all the negative numbers followed by the positive
numbers without changing the order of the numbers.
*/

#include <stdio.h>

int main() {
    int num[10];
    int i;

    printf("Enter 10 numbers: \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nNegative numbers: \n");
    for (i = 0; i < 10; i++) {
        if (num[i] < 0) {
            printf("%d\n", num[i]);
        }
    }

    printf("\nPositive numbers: \n");
    for (i = 0; i < 10; i++) {
        if (num[i] >= 0) {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}