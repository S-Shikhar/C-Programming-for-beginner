#include <stdio.h>

int main()
{
    int i, j, rows1, columns1, rows2, columns2;

    // Input rows and columns of first matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows1);
    printf("Enter number of columns: ");
    scanf("%d", &columns1);

    int matrix[rows1][columns1];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Input rows and columns of second matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows2);
    printf("Enter number of columns: ");
    scanf("%d", &columns2);

    int matrix2[rows2][columns2];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < columns2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}