/*
   1
  1 2
 1 2 3
1 2 3 4
*/

#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        for (j = 4; j >= i; j--) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf(" %d", k);
        }
        printf("\n");
    }
    return 0;
}