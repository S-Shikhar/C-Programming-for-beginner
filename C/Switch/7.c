//wap to show if a character is a vowel or consonant considering both upper and lower case

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a vowel\n", ch);
        break;
    default:
        printf("%c is a consonant\n", ch);
    }
}
