#include <stdio.h>

int main()
{
    int a[100], n, x, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = 0;

    while (pos < n && a[pos] < x)
    {
        pos++;
    }

    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
