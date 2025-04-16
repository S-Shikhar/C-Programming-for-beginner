// print ascii code of each character in a string

#include <stdio.h>

void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        printf("%d ", str[i]);
    }
    printf("\n");
}