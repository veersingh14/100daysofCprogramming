#include <stdio.h>

int main()
{
    char str[100];
    int count[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2)
            {
                printf("First repeating lowercase alphabet = %c", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (found == 0)
    {
        printf("No repeating lowercase alphabet");
    }

    return 0;
}
