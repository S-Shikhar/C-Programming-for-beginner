// WAP in c to input 10 numbers in an array and print the even elements in the array.

#include <stdio.h>

void main()
{
    int arr[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Even Elements: ");

    int first = 1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (!first)
            {
                printf(", ");
            }
            printf("%d", arr[i]);
            first = 0;
        }
    }
}