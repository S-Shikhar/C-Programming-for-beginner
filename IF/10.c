// name of the policy holder, the sum assured and first annual premium

#include<stdio.h>

void main(){
    char name[10];
    float sum, premium, discount, commission;

    printf("Enter the name: ");
    gets(name);

    printf("Enter the sum assured: ");
    scanf("%f", &sum);

    printf("Enter the first annual premium: ");
    scanf("%f", &premium);

    if(sum <= 100000){
        discount = sum * 0.05;
        commission = sum * 0.02;
    }
    else if(sum > 100000 && sum <= 200000){
        discount = sum * 0.08;
        commission = sum * 0.03;
    }
    else if(sum > 200000 && sum <= 500000){
        discount = sum * 0.10;
        commission = sum * 0.05;
    }
    else if(sum > 500000){
        discount = sum * 0.15;
        commission = sum * 0.075;
    }

    printf("\tDetails");
    printf("\n\nName of the policy holder: ");
    puts(name);
    printf("Sum assured: %.2f", sum);
    printf("\nFirst annual premium: %.2f", premium);
    printf("\nDiscount: %.2f", discount);
    printf("\nCommission: %.2f", commission);
}