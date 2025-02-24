/*
Bihar State Electricity Board calculates electricity bill for their consumers according to the units
consumed (per month) as per the given tariff.

Units Consumed
Up to 100 units
More than 100 units and up to 300 units
More than 300 units and up to 500 units
More than 500 units

Charges
1.80/unit
2.30/unit
2.80/unit
3.50/unit

Write a program to input name of the consumer, consumer number, month and units consumed.
Calculate and display the electricity bill with all the details.
*/

#include <stdio.h>

int main() {
    char name[100], month[20];
    int consumer_number, units;
    float charges, bill;

    printf("Enter name: ");
    gets(name);

    printf("Enter consumer number: ");
    scanf("%d", &consumer_number);

    printf("Enter month: ");
    scanf("%s", month);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        charges = 1.80;
    } else if (units <= 300) {
        charges = 2.30;
    } else if (units <= 500) {
        charges = 2.80;
    } else {
        charges = 3.50;
    }

    bill = units * charges;

    printf("\tDetails\n");
    printf("Name: %s\n", name);
    printf("Consumer Number: %d\n", consumer_number);
    printf("Month: %s\n", month);
    printf("Units Consumed: %d\n", units);
    printf("Electricity Bill: %.2f\n", bill);

    return 0;
}