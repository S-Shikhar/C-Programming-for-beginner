/*
1AAAAA
22BBBB
333CCC
4444DD
55555E
*/

#include <stdio.h>

void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("%d", i);
        }
        for (j = i; j <= 5; j++)
        {
            printf("%c", (64 + i));
        }
        printf("\n");
    }
}