#include <stdio.h>

int main()
{
    float p, r, t;
    float si, ci, amount;
    int i;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;

    for (i = 1; i <= t; i++)
    {
        amount = amount + (amount * r / 100);
    }

    ci = amount - p;

    printf("Simple Interest=%.0f, Compound Interest=%.2f", si, ci);

    return 0;
}
