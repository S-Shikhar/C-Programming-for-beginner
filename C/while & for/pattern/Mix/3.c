/*
10
98
765
4321
*/

#include <stdio.h>

int main()
{
    int i, j, k = 10;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");
    }

}