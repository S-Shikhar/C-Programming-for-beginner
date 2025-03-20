// remove all vowels from a string

#include <stdio.h>

void remove_vowel(char str[]) {
    int i = 0, j = 0;
    char new_str[' '];

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            new_str[j++] = str[i];
        }
    }
    new_str[j] = '\0';

    printf("%s", new_str);
}

int main() {
    char str[' '];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    remove_vowel(str);
    return 0;
}