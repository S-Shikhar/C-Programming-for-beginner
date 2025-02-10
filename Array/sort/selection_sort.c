// selection sort

#include <stdio.h>

int main()
{
    int arr[10], min = 0, temp;

    for (int i = 0; i < 10; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}