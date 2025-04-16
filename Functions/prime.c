#include <stdio.h>

int prime (int num)
{
    int count = 0;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }

    return count;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (prime(num1) == 0 && prime(num2) == 0 && (num1 - num2 == 2 || num2 - num1 == 2))
    {
        printf("Twin Prime Numbers\n");
    }
    else
    {
        printf("Not Twin Prime Numbers\n");
    }
}