//wap to input multidiigit number and print the the factorial of each digit

#include <stdio.h>

void main()
{
    int num, digit, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", digit, fact);
        num /= 10;
    }
}