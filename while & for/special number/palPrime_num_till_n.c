// wap to print the palprime numbers till n
// A palprime number is a number that is both prime and palindrome
// For example, 131 is a palprime number because it is a prime number and a palindrome number

#include <stdio.h>

int main()
{
    int n, i, j, flag1 = 0, flag2 = 0, reverse = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        flag1 = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag1 = 1;
                break;
            }
        }

        if (flag1 == 0)
        {
            temp = i;
            reverse = 0;
            while (temp > 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            if (reverse == i)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}