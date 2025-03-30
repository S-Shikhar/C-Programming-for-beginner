// wap to find the sum of left and right diagonal elements of a matrix

#include <stdio.h>

int main()
{
    int i, j, rows, columns, sum_left_diagonal = 0, sum_right_diagonal = 0;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        sum_left_diagonal += matrix[i][i];
        sum_right_diagonal += matrix[i][columns - i - 1];  // [0 1 2 3][3 2 1 0]
    }

    printf("Sum of left diagonal: %d\n", sum_left_diagonal);
    printf("Sum of right diagonal: %d\n", sum_right_diagonal);
}