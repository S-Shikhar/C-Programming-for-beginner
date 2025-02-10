// WAP in c to input 10 numbers in an array and print the max element of the array.

#include <stdio.h>

void main()
{
    int arr[10], max;

    for (int i = 0; i < 10; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Max Element= %d", max);
}