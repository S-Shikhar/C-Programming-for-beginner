/*
Input 10 numbers into an integer array and find the frequency of each
number present in it.
*/

#include <stdio.h>

int main()
{
    int arr[10], arr1[10];
    int i, j, k, n, search = 0, count = 0;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find frequency of each element
    for (i = 0; i < 5; i++)
    {
        n  = arr[i];
        for (int l = 0; l < k; l++)
        {
            if (n != arr1[l])
            {
                search = 1;
            }
        }
        if (search == 1)
        {
            n = arr[i];
            for (j = i + 1; j < 5; j++)
            {
                if (arr[j] == n)
                {
                    count++;
                }
                printf("%d occurs %d times\n", n, count);
            }
            arr1[k] = n;
            k++;
            search = 0;
        }
    }
}