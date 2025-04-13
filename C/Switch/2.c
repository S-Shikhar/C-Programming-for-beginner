/*Using switch case, write a program to convert temperature from Fahrenheit to Celsius and Celsius to
Fahrenheit.
Fahrenheit to Celsius formula: (32°F - 32) x 5/9
Celsius to Fahrenheit formula: (0°C x 9/5) + 32*/

#include <stdio.h>

void main(){
    int choice;
    float temp;
    printf("1: Fahrenheit to Celsius\n2: Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5/9);
            break;
        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            printf("Temperature in Fahrenheit: %.2f\n", (temp * 9/5) + 32);
            break;
        default:
            printf("Invalid choice\n");
    }
}
