#include <stdio.h>

void main(){
    int i, j, k, l;

    for (i = 1; i <= 4; i++){
        for (j = 3; j >= i; j--){
            printf(" ");
        }
        for (k = 1; k <= i; k++){
            printf("%c", (64 + k));
        }
        for (l = i - 1; l >= 1; l--){
            printf("%c", (64 + l));
        }
        printf("\n");
    }
}