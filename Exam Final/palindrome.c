#include <stdio.h>

int main()
{
    int num, i, temp, sum = 0, digit;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }

    if (temp == sum)
    {
        printf("%d is a Palindrome Number", temp);
    }
    else
    {
        printf("%d is not a Palindrom Number", temp);
    }
}