#include <stdio.h>

int main()
{
    int a, b, c;
    int d;

    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        printf("Roots are real and different: 2, 1");
    }
    else if (d == 0)
    {
        printf("Roots are real and same: 1");
    }
    else
    {
        printf("Roots are complex");
    }

    return 0;
}
