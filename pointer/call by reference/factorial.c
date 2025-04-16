#include <stdio.h>

// Function to calculate factorial using iteration
void fact(int *n)
{
    int i, f = 1;

    for (i = 1; i <= *n; i++)
    {
        f = f * i;
    }
    printf("Factorial of %d = %d\n", *n, f);
}

// Function to calculate factorial using recursion
int fact_recursion(int *n)
{
    if (*n == 0 || *n == 1)
        return 1;
    else
    {
        int temp = *n - 1; // strore the decremented value in a temporary variable
        return *n * fact_recursion(&temp);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    fact(&n); // Call by reference

    printf("Factorial of %d = %d\n", n, fact_recursion(&n)); // Call by reference using recursion

    return 0;
}