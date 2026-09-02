#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Write a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            sum = sum + 1;
        else
            sum = sum + (float)(2 * i - 1) / (2 * i);

    }

    printf("%.2f\n", sum);

    return 0;
}
