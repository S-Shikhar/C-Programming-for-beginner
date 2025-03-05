// parametaerized function

#include <stdio.h>

void sum(int a, int b)  // "formal parameter" or "argument"
{
   int sum = a + b;
   printf("Sum of %d and %d is %d\n", a, b, sum); 
}

void main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum(x, y);  // "actual parameter" or "parameter"  // invoking the function
}