// return function

#include <stdio.h>

int sum(int a, int b)
{
    int sum = a + b;

    return sum;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = sum(a, b);

    printf("The sum of %d and %d is %d\n", a, b, result);

    return 0;
}