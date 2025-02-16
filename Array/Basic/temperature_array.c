/*
Store 20 temperatures in °F in a Single Dimensional Array (SDA) and 
display all the temperatures after converting them into °C.
*/

#include <stdio.h>

int main() {
    float temp[20];
    int i;

    printf("Enter 20 temperatures in Fahrenheit: \n");
    for (i = 0; i < 2; i++) {
        scanf("%f", &temp[i]);
    }

    printf("\nTemperatures in Celsius: \n");
    for (i = 0; i < 2; i++) {
        printf("%.2f F = %.2f C\n", temp[i], (temp[i] - 32) * 5 / 9);
    }

    return 0;
}