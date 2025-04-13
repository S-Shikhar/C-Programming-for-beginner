// input the elements into 4*4 matrix and transpose it.

// 

#include <stdio.h>

int main()
{
    int matrix[4][4], transpose[4][4];
    int i, j;

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // Find transpose of matrix
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the original matrix
    printf("\nOriginal matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transpose matrix
    printf("\nTranspose of matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}