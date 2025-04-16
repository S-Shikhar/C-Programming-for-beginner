//array of structure
//Write a program to store the details of a student using structure and display the details of the student.

#include <stdio.h>

struct Details
{
    char name[' '];
    int roll;
    char city[' '];
    float marks[5];
};

void main()
{
    struct Details obj1;

    printf("\tEnter the details of student\n");
    printf("Name of student: ");
    scanf("%s", obj1.name);
    printf("Roll number: ");
    scanf("%d", &obj1.roll);
    printf("City: ");
    scanf("%s", obj1.city);
    printf("Enter the marks of student in 5 subjects: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &obj1.marks[i]);
    }

    printf("\n\n");

    printf("\tStudent Details\n");
    printf("Name: %s\n", obj1.name);
    printf("Roll Number: %d\n", obj1.roll);
    printf("City: %s\n", obj1.city);
    printf("\tMarks in 5 subjects: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d : %.2f\n", i + 1, obj1.marks[i]);
    }
}