// wap to find out if a number is a buzz number or not
// A buzz number is a number that is either divisible by 7 or has 7 as the last digit
// For example, 14 is a buzz number because it is divisible by 7
// For example, 17 is a buzz number because it has 7 as the last digit

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 7 == 0 || n % 10 == 7)
    {
        printf("Buzz Number\n");
    }
    else
    {
        printf("Not a Buzz Number\n");
    }

    return 0;
}