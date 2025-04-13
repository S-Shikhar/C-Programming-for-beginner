/*
 Write a program to accept 10 different numbers in a Single Dimensional Array (SDA). Display the 
greatest and the smallest numbers of the array elements.
*/

#include <stdio.h>

int main()
{
    int arr[10], i, max, min;

    printf("Enter 10 different numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Greatest number is %d\n", max);
    printf("Smallest number is %d\n", min);

    return 0;
}