/*
1357A
135BA
13CBA
1DCBA
*/

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= (5 - i) * 2 - 1; j += 2)
        {
            printf("%d", j);
        }
        for (k = i; k >= 1; k--)
        {
            printf("%c", (64 + k));
        }
        printf("\n");
    }
    return 0;
}