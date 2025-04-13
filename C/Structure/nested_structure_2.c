// write a program to input name, phone number in structure employee and salary, DA, TA, gross in structure details. calculate the DA as 5%, TA as 14% and gross as salary + DA + TA. Display the details of the employee.

#include <stdio.h>

struct employee
{
    char name[' '];
    long int phone;
};

struct details
{
    float salary;
    float DA;
    float TA;
    float gross;
    struct employee e1; // nested structure
};

void main()
{
    struct details obj1;

    printf("\tEnter the details of employee\n");
    printf("Name of employee: ");
    scanf("%s", obj1.e1.name);
    printf("Phone number: ");
    scanf("%ld", &obj1.e1.phone);
    printf("Salary: ");
    scanf("%f", &obj1.salary);

    obj1.DA = obj1.salary * 0.05;
    obj1.TA = obj1.salary * 0.14;
    obj1.gross = obj1.salary + obj1.DA + obj1.TA;

    printf("\n\n");

    printf("\tEmployee Details\n");
    printf("Name: %s\n", obj1.e1.name);
    printf("Phone number: %ld\n", obj1.e1.phone);
    printf("Salary: %.2f\n", obj1.salary);
    printf("DA: %.2f\n", obj1.DA);
    printf("TA: %.2f\n", obj1.TA);
    printf("Gross: %.2f\n", obj1.gross);
}