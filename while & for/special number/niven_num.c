// wap to find out if a number is a niven number or not
// A niven number is a number where the sum of its digits is divisible by the number itself
// For example, 18 is a Niven number because 1 + 8 = 9 and 18 is divisible by 9

#include <stdio.h>

int main()
{
    int n, sum = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0)
    {
        digit = n % 10;

        sum = sum + digit;

        n = n / 10;
    }

    if (temp % sum == 0)
    {
        printf("Niven Number\n");
    }
    else
    {
        printf("Not a Niven Number\n");
    }

    return 0;
}