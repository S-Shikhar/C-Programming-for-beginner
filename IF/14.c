//Write a program to input your age and print you are voter or nonvoter.

#include <stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are a voter\n");
    }
    else
    {
        printf("You are a nonvoter\n");
    }
}