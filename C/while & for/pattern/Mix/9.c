#include <stdio.h>

int main()
{
    int i, j, k = 1, l = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 3; j >= i; j--)
        {
            printf("  ");
        }
        for (k = (2 * i) - 2; k >= 2; k -= 2)
        {
            printf("%d ", k);
        }
        for (l = 1; l <= (2 * i) - 1; l += 2)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}