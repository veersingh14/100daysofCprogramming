#include <stdio.h>

int main()
{
    int n, digit, result = 0, place = 1;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;

        n = n / 10;
    }

    printf("%04d", result);

    return 0;
}
