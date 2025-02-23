#include <stdio.h>

int main()
{
    int i, j, rows, columns, sum_boundary = 0;

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

    // sum of boundary elements
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1)
            {
                sum_boundary += matrix[i][j];
            }
        }
    }

    printf("Sum of boundary elements: %d\n", sum_boundary);
}