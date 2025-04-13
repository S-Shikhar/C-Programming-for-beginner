/*
store 20 numbers in a Single Dimensional Array (SDA). Now, display only
those numbers that are perfect squares.
*/

#include <stdio.h>

int main() {
    int num[20];
    int i, j, flag;

    printf("Enter 20 numbers: \n");
    for (i = 0; i < 2; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nPerfect squares: \n");
    for (i = 0; i < 2; i++) {
        flag = 0;
        for (j = 1; j <= num[i] / 2; j++) {
            if (j * j == num[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            printf("%d\n", num[i]);
        }
    }

    return 0;
}