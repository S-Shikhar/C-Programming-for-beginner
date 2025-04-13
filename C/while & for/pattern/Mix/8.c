/*
1111
1222
1233
1234
*/

#include <stdio.h>

void main()
{
    int i, j, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i + 1; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}