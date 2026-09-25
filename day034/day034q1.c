#include <stdio.h>

int main()
{
    int a[100], n, x, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
