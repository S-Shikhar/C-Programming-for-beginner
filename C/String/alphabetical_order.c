// print a string in alphabetical order

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    gets(str);
    strupr(str);

    for (i = 65; i <= 90; i++)
    {
        for (j = 0; str[j] != '\0'; j++)
        {
            if ((char)i == str[j])
            {
                printf("%c", i);
            }
        }
    }
}