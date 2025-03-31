// wap to find the factorial of a number using function

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
    int m;
    float resault;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    resault = fact(m);

    printf("The factorial of %d is: %.0f\n", m, resault);
}

