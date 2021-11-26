#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int countin(int counter);

int main(void)
{
    string String = get_string("Text: ");
    int words = 1;
    int length = strlen(String);

    int i = 0;

    for (i = 0; length > i; i++)
    {
        if (String[i] == ' ')
        {
            if (String[i + 1] == ' ')
            {
                continue;
            }

            words++;
        }

    }

    printf("Words: %i\n", words);
}