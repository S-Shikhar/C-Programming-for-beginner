//wap to insert an element in an array at a given position

#include <stdio.h>

int main()
{
    int arr[11], n, pos;
    int i, j, k;

    for (i = 0; i < 5; i++)
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

    printf("\tArray after insertion is: \n");

    for (i = 0; i < 6; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}