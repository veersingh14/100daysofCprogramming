#include <stdio.h>

int main()
{
    int n, temp, digit, i, fact, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;

        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;

        temp = temp / 10;
    }

    if (sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}
