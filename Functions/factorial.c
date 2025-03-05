#include <stdio.h>

int fact (int num)
{
    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int m, n, p;
    float resault;

    printf("Enter the three numbers: ");
    scanf("%d %d %d", &m, &n, &p);

    resault = (fact(m) - fact(n)) / fact(p);

    printf("Result = %.2f\n", resault);
}

