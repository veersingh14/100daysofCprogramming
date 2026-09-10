#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        // Print spaces
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }

        // Print numbers
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
