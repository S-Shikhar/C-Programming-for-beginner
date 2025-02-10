/*
1357
135
13
1
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("%d", 2 * j - 1);
        }
        printf("\n");
    }
    return 0;
}