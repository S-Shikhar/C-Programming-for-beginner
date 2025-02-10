#include <stdio.h>

int main()
{
    int arr[11], n, pos;
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &n);

    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d", &pos);

    for (i = 9; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = n;

    printf("\tArray after insertion is: ");

    for (i = 0; i < 11; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}