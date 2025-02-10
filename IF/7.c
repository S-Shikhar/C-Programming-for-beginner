#include<stdio.h>

void main(){
    float a, b;

    printf("Enter the total cost: ");
    scanf("%f", &a);

    if(a <= 2000){
        b = (a * 0.5);
        printf("The discount is : %.2f", b);
        printf("\nAmmount to be paid: %.2f", a - b);
        printf("\nthe gift is: Calculator");
    }
    else if(a > 2000 && a <= 5000){
        b = (a * 0.1);
        printf("The discount is : %.2f", b);
        printf("\nAmmount to be paid: %.2f", a - b);
        printf("\nthe gift is: School Bag");
    }
    else if(a > 5000 && a <= 10000){
        b = (a * 0.15);
        printf("The discount is : %.2f", b);
        printf("\nAmmount to be paid: %.2f", a - b);
        printf("\nthe gift is: Wall Clock");
    }
    else if(a > 10000){
        b = (a * 0.2);
        printf("The discount is : %.2f", b);
        printf("\nAmmount to be paid: %.2f", a - b);
        printf("\nthe gift is: Wrist Watch");
    }

}