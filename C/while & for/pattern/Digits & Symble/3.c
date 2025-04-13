/*
7531
7531
7531
7531
*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) 
    {
        for (j = 7; j >= 1; j -= 2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}