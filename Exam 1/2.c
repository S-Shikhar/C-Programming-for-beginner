/*
In an examination, the grades are awarded to the students in 'Science' according to the average
marks obtained in the examination.

Marks
80% and above
60% or more but less than 80%
45% or more but less than 60%
40% or more but less than 45%
Less than 40%

Grades
Distinction
First Division
Second Division
Pass
Promotion not granted

Write a program to input name and marks in Physics, Chemistry and Biology, Calculate the average
marks. Display the name, average marks and the grade obtained.
*/

#include <stdio.h>

int main()
{
    char name[100];
    float physics, chemistry, biology, average;
    char grade[20];

    printf("Enter name: ");
    gets(name);

    printf("Enter marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks in Biology: ");
    scanf("%f", &biology);

    average = (physics + chemistry + biology) / 3;

    printf("\tDetails\n");
    printf("Name: %s\n", name);
    printf("Average Marks: %.2f\n", average);
    if (average >= 80)
    {
        printf("Distinction\n");
    }
    else if (average >= 60)
    {
        printf("First Division\n");
    }
    else if (average >= 45)
    {
        printf("Second Division\n");
    }
    else if (average >= 40)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Promotion not granted\n");
    }

    
}