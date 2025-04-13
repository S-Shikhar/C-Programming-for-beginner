// Linear Search in an array
#include <stdio.h>

void main()
{
    int arr[10], search, found = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }
}