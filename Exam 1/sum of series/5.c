// S = 3/(a+5) + 5/(a+8) + 7/(a+11) + ……n

#include <stdio.h>

int main()
{
    int i, n, a;
    double s = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    for (i = 1; i <= n; i++)
    {
        s += (2 * i + 1) / (a + 3 * i + 2);
    }
    printf("Sum of the series is %lf", s);
    return 0;
}