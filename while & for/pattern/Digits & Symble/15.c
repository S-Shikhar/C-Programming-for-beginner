/*
7531
753
75
7
*/
//see
#include <stdio.h>

// int main() {
//     int i, j;
//     for (i = 1; i <= 4; i++) {
//         for (j = 7; j >= 2 * i - 1; j = j - 2) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main(){
    int i, j;
    for (i = 1; i <= 7; i = i + 2){
        for (j = 7; j >= i; j = j - 2)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}