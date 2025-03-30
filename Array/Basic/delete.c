// wap to delete an element from an array

 #include <stdio.h>

int main()
{
    int arr[10], n, pos;
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position at which the element is to be deleted: ");
    scanf("%d", &pos);

    for (i = pos; i < 10; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("\tArray after deletion is: ");

    for (i = 0; i < 9; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}