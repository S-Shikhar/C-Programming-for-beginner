//write a program to enter two numbers and an operator (+, -, *, /) and perform the operation on the two numbers. 

#include <stdio.h>

void main()
{
    float num1, num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operator\n");
    }
}