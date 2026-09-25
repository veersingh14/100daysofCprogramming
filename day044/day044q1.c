#include <stdio.h>

int main()
{
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
        {
            special++;
        }
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", special);

    return 0;
}
