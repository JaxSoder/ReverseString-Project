#include <stdio.h>
#include <string.h>

int main(void) 
{
    char text[100];
    printf("Give me a word and I'll reverse it! ");
    gets(text);

    int string_length = strlen(text) - 1;

    char final_string[string_length];

    int j = 0;

    for(int i = string_length; i >= 0; i--)
    {
        final_string[j] = text[i];
        j = j + 1;
    }

    printf("%s", final_string);
    return 0;
}
