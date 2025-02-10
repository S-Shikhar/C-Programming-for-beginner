/*
1 2 3 4
 1 2 3
  1 2
   1
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 2; j <= i; j++) {
            printf(" ");
        }
        for (k = 1; k <= 5 - i; k++) {
            printf(" %d", k);
        }
        printf("\n");
    }
    return 0;
}