#include <stdio.h>

void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5; k++)
        {
            if (i == 1 || i == 5 || (i + k) == 6)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}