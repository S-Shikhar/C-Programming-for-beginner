//wap to input multidiigit number and print the and print the minimun digit

#include <stdio.h>

void main()
{
    int num, digit, min = 9;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        if (digit < min)
        {
            min = digit;
        }
        num /= 10;
    }
    printf("Minimum digit is %d\n", min);
}