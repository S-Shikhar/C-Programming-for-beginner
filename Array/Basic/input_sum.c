// WAP in c to input 10 numbers in an array and print the sum of all elements of the array.

#include <stdio.h>

void main()
{
    int arr[10], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);
}