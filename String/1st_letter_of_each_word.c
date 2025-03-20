// print 1st letter of each word in a string

#include <stdio.h>

void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("%c", str[0]); // Print the first character of the string

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            printf("%c", str[i + 1]);
        }
    }
    printf("\n");
}