// create a program to sort each row and column of a matrix

#include <stdio.h>

int main()
{
    int i, j, k, rows, columns;

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

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Sort each row
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            for (k = j + 1; k < columns; k++)
            {
                if (matrix[i][j] > matrix[i][k])
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
            }
        }
    }

    // Print the matrix after sorting each row
    printf("The matrix after sorting each row is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Sort each column
    for (j = 0; j < columns; j++)
    {
        for (i = 0; i < rows; i++)
        {
            for (k = i + 1; k < rows; k++)
            {
                if (matrix[i][j] > matrix[k][j])
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }

    // Print the matrix after sorting each column
    printf("The matrix after sorting each column is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}