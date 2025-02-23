/*
5) The volume of solids, viz. cuboid, cylinder and cone can be calculated by the formula:
Volume of a cuboid (v = l*b*h)
Volume of a cylinder (v = 3.14*r2*h)
Volume of a cone (v = (1/3)*3.14*r2*h)
Using a switch case statement, write a program to find the volume of different solids by taking
suitable variables and data types.
*/

#include <stdio.h>

int main()
{
    int choice;
    float l, b, h, r, v;

    printf("1. Volume of a cuboid\n");
    printf("2. Volume of a cylinder\n");
    printf("3. Volume of a cone\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter length, breadth and height of the cuboid: ");
        scanf("%f %f %f", &l, &b, &h);
        v = l * b * h;
        printf("Volume of the cuboid: %.2f\n", v);
        break;
    case 2:
        printf("Enter radius and height of the cylinder: ");
        scanf("%f %f", &r, &h);
        v = 3.14 * r * r * h;
        printf("Volume of the cylinder: %.2f\n", v);
        break;
    case 3:
        printf("Enter radius and height of the cone: ");
        scanf("%f %f", &r, &h);
        v = (1 / 3) * 3.14 * r * r * h;
        printf("Volume of the cone: %.2f\n", v);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}