/*
1) A company announces revised Dearness Allowance (DA) and Special Allowances (SA) for their
employees as per the tariff given below:
Basic
Up to 10,000
10,001 - 20,000
20,001 - 30,000
30,001 and above
Dearness Allowance (DA)
10%
12%
15%
20%
Special Allowance (SA)
5%
8%
10%
12%
Write a program to accept name and Basic Salary (BS) of an employee. Calculate and display gross
salary.
Gross Salary = BS + DA + SA
*/

#include <stdio.h>

int main() {
    char name[100];
    int basic;
    float da, sa, gross;

    printf("Enter name: ");
    gets(name); 

    printf("Enter basic salary: ");
    scanf("%d", &basic);

    if (basic <= 10000) {
        da = 0.1 * basic;
        sa = 0.05 * basic;
    } else if (basic <= 20000) {
        da = 0.12 * basic;
        sa = 0.08 * basic;
    } else if (basic <= 30000) {
        da = 0.15 * basic;
        sa = 0.1 * basic;
    } else {
        da = 0.2 * basic;
        sa = 0.12 * basic;
    }

    gross = basic + da + sa;

    printf("| %-20s | %-10s | %-10s | %-10s | %-15s |\n", "Name", "Basic", "DA", "SA", "Gross Salary");
    printf("| %-20s | %-10d | %-10.2f | %-10.2f | %-15.2f |\n", name, basic, da, sa, gross);

    return 0;
}
