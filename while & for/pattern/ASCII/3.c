/*
DCBA
CBA
BA
A
*/

#include <stdio.h>

int main(){
    int i, j;
    for (i = 1; i <= 4; i++){
        for (j = 5 - i; j >= 1; j--)
        {
            printf("%c", (64 + j));
        }
        printf("\n");
    }
}