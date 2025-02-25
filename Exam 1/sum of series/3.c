// s = 1 + 2/2! + 3/3! + 4/4! + .... + n/n!

#include <stdio.h>

int main()
{
    int i, j, n;
    double s = 0.0, f = 1.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        f *= i;
        s += i / f;
    }
    printf("Sum of the series is %lf", s);
    return 0;
}