#include <stdio.h>

void main()
{
    int arr[10], evenArr[5], oddArr[5], j = 0, k = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[j] = arr[i];
            j++;
        }
        else
        {
            oddArr[k] = arr[i];
            k++;
        }
    }

    int first = 1, last = 1;
    printf("Even numbers: ");
    for (int i = 0; i < j; i++)
    {
        if (!first)
            {
                printf(", ");
            }
            printf("%d", evenArr[i]);
            first = 0;
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < k; i++)
    {
        if (!last)
            {
                printf(", ");
            }
            printf("%d", oddArr[i]);
            last = 0;
    }
    printf("\n");
}