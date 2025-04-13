/*
6789
789
89
*/

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = i; j <= 4; j++)
        {
            printf("%d", j + 5);
        }
        printf("\n");
    }
    return 0;
}