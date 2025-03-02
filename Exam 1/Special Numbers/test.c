#include <stdio.h>

int main()
{
    int A  = 5;

    A = A-- + A++;

    printf("%d", A);
}