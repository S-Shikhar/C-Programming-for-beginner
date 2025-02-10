// wap to find out if a number is a neon number or not
// A neon number is a number where the sum of the digits of its square is equal to the number itself
// For example, 9 is a neon number because 9 * 9 = 81 which is equal to 8 + 1 = 9
// example: 

#include <stdio.h>

int main()
{
    int n, sum = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n * n;
    
    while (temp > 0)
    {
        digit = temp % 10;

        sum = sum + digit;

        temp = temp / 10;
    }

    if (sum == n)
    {
        printf("Neon Number\n");
    }
    else
    {
        printf("Not a Neon Number\n");
    }

    return 0;
}