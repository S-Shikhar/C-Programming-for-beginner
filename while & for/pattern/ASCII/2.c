/*
A
AC
ACE
ACEG
*/

#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i <= 4; i++){
        for (j = 1; j <= 2 * i - 1; j += 2)
        {
            printf("%c", (64 + j));
        }
        printf("\n");
    }
}