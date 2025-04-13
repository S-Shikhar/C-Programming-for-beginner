// WAP in c to input 10 numbers in an array and print the sum of even elements and odd elements in the array.

#include <stdio.h>

void main()
{
    int arr[10], evenSum = 0, oddSum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
           evenSum = evenSum + arr[i]; 
        }
        else
        {
            oddSum = oddSum + arr[i];
        }
    }

    printf("Sum of Even Elements = %d\n", evenSum);
    printf("Sum of Odd Elements = %d\n", oddSum);
}