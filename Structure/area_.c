// write a program to input length, breadth, side. calculate the area of rectangle and square using structure and display the area.

#include <stdio.h>

struct Area 
{
    float length, breadth, side;
};

void main()
{
    struct Area obj1;

    printf("\tEnter the details of rectangle and square\n");
    printf("Length of rectangle: ");
    scanf("%f", &obj1.length);
    printf("Breadth of rectangle: ");
    scanf("%f", &obj1.breadth);
    printf("Side of square: ");
    scanf("%f", &obj1.side);

    float area_rectangle = obj1.length * obj1.breadth;
    float area_square = obj1.side * obj1.side;

    printf("\n\n");

    printf("\tArea of rectangle and square\n");
    printf("Area of rectangle: %.2f\n", area_rectangle);
    printf("Area of square: %.2f\n", area_square);
}