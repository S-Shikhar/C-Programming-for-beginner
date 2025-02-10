// wap to find out if a number is a twin prime number or not
// A twin prime number is a prime number that is either 2 less or 2 more than another prime number
// For example, 11 and 13 are twin prime numbers because 13 - 11 = 2
// for example, 17 and 19 are twin prime numbers because 19 - 17 = 2

#include <stdio.h>

int main()
{
    int n1, n2, i, j, flag1 = 0, flag2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 2; i <= n1 / 2; i++)
    {
        if (n1 % i == 0)
        {
            flag1 = 1;
            break;
        }
    }

    for (j = 2; j <= n2 / 2; j++)
    {
        if (n2 % j == 0)
        {
            flag2 = 1;
            break;
        }
    }

    if (flag1 == 0 && flag2 == 0 && (n1 - n2 == 2 || n2 - n1 == 2))
    {
        printf("Twin Prime Numbers\n");
    }
    else
    {
        printf("Not Twin Prime Numbers\n");
    }
}