#include <stdio.h>

int main()
{
    int n, i, search;
    int a[100];
    int found = 0;

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Element to search
    scanf("%d", &search);

    // Linear search
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}
