//wap to input multidiigit number and print the digits divisible by 5 & 7

#include <stdio.h>

void main()
{
    int num, digit, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        if (digit % 5 == 0 && digit % 7 == 0)
        {
            printf("%d is divisible by 5 and 7\n", digit);
        }
        temp /= 10;
    }
    printf("%d has no digit divisible by 5 and 7\n", num);
}