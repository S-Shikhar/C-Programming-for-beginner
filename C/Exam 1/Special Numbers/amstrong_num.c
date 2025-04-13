wap to find if a num is armstrong or not

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
        sum = sum + digit*digit*digit;
        num = num / 10;
    }

    if(temp == sum)
    {
        printf("%d is an armstrong number", temp);
    }
    else
    {
        printf("%d is not an armstrong number", temp);
    }
}