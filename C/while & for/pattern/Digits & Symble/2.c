/*
1111
2222
3333
4444
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}