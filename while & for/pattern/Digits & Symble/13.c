/*
1234
234
34
4
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}