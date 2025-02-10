// wap to find out if a number is a twisted prime number or not
// A number is said to be twisted prime if it is a prime number and reverse of the number is also a prime number
// For example, 97 is a prime number and the reverse of the number is also a prime number

#include <stdio.h>

int main()
{
    int n, i, flag = 0, reverse = 0, temp, digit, flag2 = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    while (temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    for (i = 2; i <= reverse / 2; i++)
    {
        if (reverse % i == 0)
        {
            flag2 = 1;
            break;
        }
    }

    if (flag == 0 && flag2 == 0)
    {
        printf("Twisted Prime Number\n");
    }
    else
    {
        printf("Not a Twisted Prime Number\n");
    }
}