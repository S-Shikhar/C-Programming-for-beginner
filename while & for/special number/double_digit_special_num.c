// wap to find if a number is a double digit special number or not
// A special two-digit number is a number where the sum of its digits and the product of its digits is equal to the number itself

#include <stdio.h>

int main()
{
    int n, sum = 0, digit, temp, prod = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    if (n > 9 && n < 100)
    {
        while (n > 0)
        {
            digit = n % 10;

            sum = sum + digit;
            prod = prod * digit;
            
            n = n / 10;
        }

        sum = sum + prod;

        if (sum == temp)
        {
            printf("Double Digit Special Number\n");
        }
        else
        {
            printf("Not a Double Digit Special Number\n");
        }

        return 0;
    }
}