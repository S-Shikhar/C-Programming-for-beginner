/*Create a program to convert rupee into dollar and dollar into
rupee according to the user's choice. Assume conversion price: 1 Dollar = Rs.77.*/

#include <stdio.h>

void main(){
    int choice;
    float amount;
    printf("1: Rupee to Dollar\n2: Dollar to Rupee\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter amount in Rupee: ");
            scanf("%f", &amount);
            printf("Amount in Dollar: %.2f\n", amount / 77);
            break;
        case 2:
            printf("Enter amount in Dollar: ");
            scanf("%f", &amount);
            printf("Amount in Rupee: %.2f\n", amount * 77);
            break;
        default:
            printf("Invalid choice\n");
    }
}