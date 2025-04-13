// s = 1 + (1 * 2) + (1 * 2 * 3) + (1 * 2 * 3 * 4) + .... + n

#include <stdio.h>

int main()
{
    int i, j, s = 0, f = 1, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        f *= i;
        s += f;
    }
    printf("Sum of the series is %d", s);
    return 0;
}