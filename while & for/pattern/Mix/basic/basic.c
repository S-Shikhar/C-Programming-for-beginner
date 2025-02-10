/*
ABCD1
ABC12
AB123
A1234
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("%c", (64 + j));
        }
        for (k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}