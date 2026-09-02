#include <stdio.h>

int main()
{
    char str[200];
    int i, words = 0;
    int in_word = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            if (in_word == 0)
            {
                words++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    printf("Number of words = %d\n", words);

    return 0;
}
