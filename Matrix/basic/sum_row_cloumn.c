// sum of each row and column of a matrix

#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j, row_sum, col_sum;

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // Find sum of each row & columns
    for (i = 0; i < 3; i++)
    {
        row_sum = 0;
        col_sum = 0;
        for (j = 0; j < 3; j++)
        {
            row_sum += matrix[i][j];
            col_sum += matrix[j][i];
        }
        printf("Sum of row %d: %d\n", i + 1, row_sum);
        printf("Sum of column %d: %d\n", i + 1, col_sum);
    }

    return 0;
}