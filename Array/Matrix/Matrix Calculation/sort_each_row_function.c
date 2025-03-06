#include <stdio.h>

void display (int row, int col, int arr[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void sort (int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

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
    display(rows, columns, matrix);

    // Copy the elements of the matrix to a 1D array
    int k = 0;
    int array[rows * columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            array[k++] = matrix[i][j];
        }
    }

    // Sort the 1D array
    sort(array, rows * columns);

    // Copy the elements of the 1D array back to the matrix
    k = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            matrix[i][j] = array[k++];
        }
    }

    // Print the sorted matrix
    printf("The sorted matrix is:\n");
    display(rows, columns, matrix);
}