#include <stdio.h>

int main()
{
    int n, first, last, digits, power, middle, result;

    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    int temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    power = 1;
    for (int i = 1; i <= digits; i++)
    {
        power = power * 10;
    }

    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
