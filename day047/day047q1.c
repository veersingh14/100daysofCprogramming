#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i, anagram = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        count1[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        count2[(unsigned char)str2[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count1[i] != count2[i])
        {
            anagram = 0;
            break;
        }
    }

    if (anagram == 1)
        printf("Strings are anagrams");
    else
        printf("Strings are not anagrams");

    return 0;
}
