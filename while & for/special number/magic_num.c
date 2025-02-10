//wap to find a number is magic or not
//magic number is a number whose sum of digits is equal to 1 after summing the digits of the number until a single digit is obtained 
//172 = 1 + 7 + 2 = 10 = 1 + 0 = 1

#include <stdio.h>

int main()
{
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    
    do
    {
        sum = 0;
        while (n > 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    while(sum != 1);

    if (sum == 1)
    {
        printf("Magic Number\n");
    }
    else
    {
        printf("Not a Magic Number\n");
    }

    return 0;
}