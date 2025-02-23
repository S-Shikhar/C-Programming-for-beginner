/*
Using a switch case statement, write a menu driven program to convert a given temperature from
Fahrenheit to Celsius and vice-versa. For an incorrect choice, an appropriate message should be
displayed.
Hint: c = (f - 32) * 5 / 9 and f = (c * 9 / 5) + 32
*/

#include <stdio.h>

int main()
{
    int choice;
    float f, c;

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", c);
        break;
    case 2:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", f);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}