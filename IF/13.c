// Write a program to input a number and print the number in positive and negative.

#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("The number is negative\n");
    }
    else if (num > 0)
    {
        printf("The number is positive\n");
    }
    else
    {
        printf("The number is zero\n");
    }
}