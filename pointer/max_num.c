#include <stdio.h>

int main()
{
    int a, b, c, *p, *q, *r, max_num;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    p = &a;
    q = &b;
    r = &c;

    if(*p > *q && *p > *r)
    {
        printf("Max number = %d", *p);
    }
    else if(*q > *p && *q > *r)
    {
        printf("Max number = %d", *q);
    }
    else
    {
        printf("Max number = %d", *r);
    }
}