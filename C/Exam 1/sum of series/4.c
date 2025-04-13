//  S = (1+2)/(1*2) + (1+2+3)/(1*2*3) + (1+2+3+4)/(1*2*3*4) + …………n

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
        for (j = 1; j <= i; j++)
        {
            s += j;
        }
        s /= f;
    }
    printf("Sum of the series is %lf", s);
    return 0;
}