// write a program to input name, age, DOB in structure person and roll number, marks in 5 subjects in structure student.

#include <stdio.h>

struct person
{
    char name[' '];
    int age;
    char dob[' '];
};

struct student
{
    int roll;
    float marks[5];
    struct person p1;  //nested structure
};


void main()
{
    struct student obj1;

    printf("\tEnter the details of student\n");
    printf("Name of student: ");
    scanf("%s", obj1.p1.name);
    printf("Age: ");
    scanf("%d", &obj1.p1.age);
    printf("Date of Birth: ");
    scanf("%s", obj1.p1.dob);
    printf("Roll number: ");
    scanf("%d", &obj1.roll);
    printf("Enter the marks of student in 5 subjects: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%f", &obj1.marks[i]);
    }

    printf("\n\n");

    printf("\tStudent Details\n");
    printf("Name: %s\n", obj1.p1.name);
    printf("Age: %d\n", obj1.p1.age);
    printf("Date of Birth: %s\n", obj1.p1.dob);
    printf("Roll Number: %d\n", obj1.roll);
    printf("\tMarks in 5 subjects: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d : %.2f\n", i + 1, obj1.marks[i]);
    }
}