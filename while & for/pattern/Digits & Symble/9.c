/*
4321
321
21
1
*/

#include <stdio.h>

int main() 
{
    int i, j;
    for (i = 1; i <= 4; i++) 
    {
        for (j = 5-i; j >= 1; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}