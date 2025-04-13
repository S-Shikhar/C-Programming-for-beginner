//wap to input multidiigit number and print the square of eve digit and cube of odd digit

#include <stdio.h>

void main()
{
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        switch (digit % 2)
        {
        case 0:
            printf("Square of %d is %d\n", digit, digit * digit);
            break;
        default:
            printf("Cube of %d is %d\n", digit, digit * digit * digit);
        }
        num /= 10;
    }
}