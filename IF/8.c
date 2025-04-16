// input the name, age and taxable income 

#include<stdio.h>
// #include<string.h>

void main(){
    char name[10];
    float income;
    int age;
    
    printf("Enter the name: ");
    //scanf("%s", &name);
    gets(name);

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the taxable income: ");
    scanf("%f", &income);

    if(age <= 60){
        if(income <= 250000){
            printf("No tax");
        }
        else if(income > 250000 && income <= 500000){
            printf("The tax is : %.2f", (income - 160000) * 0.1);
                 
        }
        else if(income > 500000 && income <= 1000000){
            printf("The tax is : %.2f", (income - 500000) * 0.2 + 34000);
        }
        else if(income > 1000000){
            printf("The tax is : %.2f", (income - 1000000) * 0.3 + 94000);
        }
        else{
            printf("Invalid input");
        }
    }
    else{
        printf("Senior citizen");
    }    
}