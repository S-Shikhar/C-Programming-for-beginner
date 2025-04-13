#include<stdio.h>
// #include<string.h>

void main(){
    float b, c;
    char a[10];

    printf("Enter the taxi NO. : ");
    gets(a);
    // scanf("%s", &a);

    printf("Enter the distance (km) : ");
    scanf("%f", &b);

    if(b <= 5){
        printf("The fare is : 100");
    }
    else if(b > 5 && b <= 15){
        c = 100 + (b - 5) * 10;
        //printf("The fare is : %f", c);
    }
    else if(b > 15 && b <= 25){
        c = 100 + 100 + (b - 15) * 8;
        //printf("The fare is : %f", c);
    }
    else if(b > 25){
        c = 100 + 100 + 80 + (b - 25) * 5;
        //printf("The fare is : %f", c);
    }

    printf("\t******* TAXI BILL *******\n");
    printf("Taxi NO. : ");
    puts(a);
    // printf("Taxi NO. : %s", a);
    printf("Distance travelled : %.2f", b);
    printf("\nThe fare is : %.2f", c);
}