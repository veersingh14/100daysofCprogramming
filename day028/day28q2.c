#include <stdio.h>

int main()
{
    int n, i;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Print array elements
    printf("Array elements are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
