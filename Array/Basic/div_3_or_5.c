/*
Write a program to accept 20 different numbers in a Single Dimensional Array (SDA). Display the 
sum of all the numbers which are divisible by either 3 or 5.
*/

#include <stdio.h>

int main()
{
    int arr[20], i, sum = 0;

    printf("Enter 20 different numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 3 == 0 || arr[i] % 5 == 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum of all the numbers which are divisible by either 3 or 5 is %d\n", sum);

    return 0;
}