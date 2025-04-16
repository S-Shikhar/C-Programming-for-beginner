#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%d", j);    
        }
        if (i > 1)
        {
            for (k = 1; k <= i - 1; k++)
            {
                printf("%c", 65 + k);
            }
        }
    }
}