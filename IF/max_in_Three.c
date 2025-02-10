#include <stdio.h>

void main(){
    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("The maximum number is : %d", a);
    }
    else if(b > a && b > c){
        printf("The maximum number is : %d", b);
    }
    else if(c > a && c > b){
        printf("The maximum number is : %d", c);
    }
    else{
        printf("All the numbers are equal");
    }
}