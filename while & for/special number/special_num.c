//wap to find a number is special or not
//special number is a number whose sum of factorial of digits is equal to the number itself
//145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

#include <stdio.h>

int main()
{
    int n, sum = 0, i, fact, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0)
    {
        i = 1, fact = 1;
        int rem = n % 10;
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("Special Number\n");
    }
    else
    {
        printf("Not a Special Number\n");
    }

    return 0;
}