// max number of two numbers using return function

#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = max(a, b);

    printf("The maximum of %d and %d is %d\n", a, b, result);

    return 0;
}