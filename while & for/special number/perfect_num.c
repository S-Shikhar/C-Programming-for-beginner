// wap to find if an number is perfect or not

// perfect number: if the sum of divisor without ifself is equal to the number

#include <stdio.h>

void main()
{
    int num, sum = 0;
    
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
}
