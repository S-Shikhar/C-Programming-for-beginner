// wap to find sum of two numbers using pointers

#include <stdio.h>

int main()
{
    int a, b, *p, *q, sum;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;  // p points to a
    q = &b;  // q points to b

    sum = *p + *q;  

    printf("Sum = %d", sum);

    printf("\nAddress:\n");
    printf("a = %u \nb = %u", p, q);   // p points to address of a, q points to address of b
}