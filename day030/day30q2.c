#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Count positive, negative and zero
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeros = %d", zero);

    return 0;
}
