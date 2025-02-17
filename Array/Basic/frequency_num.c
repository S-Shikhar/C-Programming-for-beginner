/*
Input 10 numbers into an integer array and find the frequency of each
number present in it.
*/

#include <stdio.h>

int main() {
    int arr[10], freq[10];
    int i, j, count;

    // Input 10 numbers
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    // Find frequency of each element
    for (i = 0; i < 10; i++) {
        count = 1;
        for (j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Print frequency of each element
    printf("\nFrequency of all elements of array:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}