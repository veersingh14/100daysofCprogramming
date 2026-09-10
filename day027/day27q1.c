#include <stdio.h>

int main()
{
    int i, j, stars;

    for (i = 1; i <= 9; i++)
    {
        if (i <= 5)
            stars = 2 * i - 1;
        else
            stars = 2 * (10 - i) - 1;

        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
