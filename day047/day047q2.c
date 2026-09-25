#include <stdio.h>

int main()
{
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0, length;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';
            length = j;

            if (length > max)
            {
                max = length;

                for (j = 0; word[j] != '\0'; j++)
                {
                    longest[j] = word[j];
                }

                longest[j] = '\0';
            }

            j = 0;

            if (str[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}
