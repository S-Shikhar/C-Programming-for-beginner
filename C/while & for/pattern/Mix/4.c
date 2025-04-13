/*
J
IH
GFE
DCBA
*/

#include <stdio.h>

int main()
{
    int i, j, k = 10;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", (64 + k));
            k--;
        }
        printf("\n");
    }

}