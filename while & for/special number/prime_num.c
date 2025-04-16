//wap to find a number is prime or not
//prime number is a number that is greater than 1 and divided by 1 or itself only
//2, 3, 5, 7, 11, 13, 17, 19, 23, and 29 are prime numbers

#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("Not a Prime Number\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                flag++;
            }
        }

        if (flag == 2)
        {
            printf("Prime Number\n");
        }
        else
        {
            printf("Not a Prime Number\n");
        }
    }

    return 0;
}