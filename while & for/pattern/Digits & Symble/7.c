/*
4
34
234
1234
*/

#include <stdio.h>

int main() 
{
    int i, j;
    for (i = 1; i <= 4; i++) 
    {
        for (j = (5 - i); j <= 4; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}