// merge two array of size 10 using for loop to merge the array

#include <stdio.h>

int main() {
    int arr1[10], arr2[10], arr3[20];
    int i, j, k;

    printf("Enter 10 elements of first array: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 10 elements of second array: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging two arrays using for loop
    for (i = 0; i < 10; i++) {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < 10; j++) {
        arr3[i + j] = arr2[j];
    }

    // Print the merged array
    printf("\nMerged array is: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}



