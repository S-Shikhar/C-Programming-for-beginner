// wap to print the circular elements of a matrix

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

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

    // Print the circular elements of the matrix
    printf("The circular elements of the matrix are:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = i; j < columns - i; j++)
        {
            printf("%d ", matrix[i][j]);
        }
 
        for (j = i + 1; j < rows - i; j++)
        {
            printf("%d ", matrix[j][columns - i - 1]);
        }

        for (j = columns - i - 2; j >= i; j--)
        {
            printf("%d ", matrix[rows - i - 1][j]);
        }

        for (j = rows - i - 2; j > i; j--)
        {
            printf("%d ", matrix[j][i]);
        }
    }


    return 0;
}