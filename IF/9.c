//calculate the maturity amount. take the sum and number of days as inputs.

#include <stdio.h>

void main(){
    float sum;
    int days;
    
    printf("Enter the sum: ");
    scanf("%f", &sum);

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if(days <= 180){
        printf("The maturity amount is : %.2f", sum + (sum * 0.055));
    }
    else if(days > 180 && days <= 364){
        printf("The maturity amount is : %.2f", sum + (sum * 0.075));
    }
    else if(days = 365){
        printf("The maturity amount is : %.2f", sum + (sum * 0.09)); 
    }
    else{
        printf("The maturity amount is : %.2f", sum + (sum * 0.85));
    }
}