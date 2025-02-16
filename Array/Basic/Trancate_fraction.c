/*
accept 10 different decimal numbers (double data type) in a Single
Dimensional Array (say, A). Truncate the fractional part of each number of the array A and store
their integer part in another array (say, B). Finally, display the contents of both arrays.
*/

#include <stdio.h>

int main() {
    double A[10];
    int B[10];
    int i;

    printf("Enter 10 decimal numbers: \n");
    for (i = 0; i < 10; i++) {
        scanf("%lf", &A[i]);
    }

    printf("\nTruncated integers: \n");
    for (i = 0; i < 10; i++) {
        B[i] = (int)A[i];
        printf("%d\n", B[i]);
    }

    return 0;
}