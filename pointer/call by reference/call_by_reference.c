// input three numbers and swap them using call by reference

#include <stdio.h>

void swap(int *a, int *b, int *c)
{
    *a = *a + *b + *c;
    *b = *a - *b - *c;
    *c = *a - *b - *c;
    *a = *a - *b - *c;

    printf("After swapping:\n");
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
    printf("c = %d\n", *c);
}

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    swap(&a, &b, &c); // Call by reference

    return 0;
}