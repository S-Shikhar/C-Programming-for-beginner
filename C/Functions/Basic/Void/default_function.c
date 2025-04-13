// void function

#include <stdio.h>

void sum()  // default function  // funtion defination
{
    int a, b, sum = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d", sum);
}

void main()
{
    sum();
}