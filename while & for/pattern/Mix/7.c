/*
     1
   1   2
  1  2   3
1  2   3   4
*/

#include <stdio.h>

int main()
{
    int i, j, k = 1, l = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("%d", j);
                // l++;
            }
        }
        printf("\n");
    }
    return 0;
}