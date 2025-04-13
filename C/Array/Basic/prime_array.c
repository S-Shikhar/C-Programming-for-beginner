/*
store 20 numbers in a Single Dimensional Array (SDA). Display the
numbers which are prime.
*/

#include <stdio.h>

int main() {
    int num[20];
    int i, j, flag;

    printf("Enter 20 numbers: \n");
    for (i = 0; i < 2; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nPrime numbers: \n");
    for (i = 0; i < 20; i++) {
        flag = 0;
        for (j = 2; j <= num[i] / 2; j++) {
            if (num[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && num[i] > 1) {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}