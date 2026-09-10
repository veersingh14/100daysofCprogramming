#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int a[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Find sum
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
