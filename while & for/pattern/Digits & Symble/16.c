/*
12345
1234
123
12
1
*/

#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= 6 - i; j = j + 1)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}