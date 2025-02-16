// binary search in C
// This search is only applicable for sorted arrays. The time complexity of binary search is O(log n).

#include <stdio.h>

int main()
{
    int arr[10], search, found = 0;
    int low, high, mid;

    for (int i = 0; i < 10; i++)
    {
        printf("Arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = 9;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
