/*
     1
   1   2
  1  2   3
1  2   3   4
*/

#include <stdio.h>

int main() {

    for (int i = 1; i <= 4; i++) {
        for (int j = i; j < 4; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
