//wap to find if a number is a decurion number or not
//1^1 + 3^2 + 5^3 = 1 + 9 + 125 = 135

#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, i, temp1, temp2, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp1 = temp2 = n;
    i = 1;
    while (n > 0)
    {
        c++;
        n = n / 10;
    }
    while(temp1 > 0)
    {
        int rem = temp1 % 10;
        sum = sum + pow(rem, c);
        c--;
        temp1 = temp1 / 10;
    }
    if(sum == temp2)
    {
        printf("Decurion Number\n");
    }
    else
    {
        printf("Not a Decurion Number\n");
    }
}