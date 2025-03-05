// void function

#include <stdio.h>

void sum();  // Function prototype

void main()
{
    sum(); // Function call
}

// Function definition

void sum()
{
    int a, b, sum = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d", sum);
}
