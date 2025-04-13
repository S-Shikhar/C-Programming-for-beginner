
#include <stdio.h>

void main()
{
    int num, digit, sum = 0, temp = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num;

    while(num > 0)
    {
        digit = num % 10;
        sum = sum * 10 + digit;
        num = num / 10;
    }

    if(temp == sum)
    {
        printf("%d is a palindrome number", temp);
    }
    else
    {
        printf("%d is not a palindrome number", temp);
    }
}