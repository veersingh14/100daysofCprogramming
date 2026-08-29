#include <stdio.h>

int main()
{
    int a, b, lcm;

    scanf("%d %d", &a, &b);

    if (a > b)
        lcm = a;
    else
        lcm = b;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            break;
        }

        lcm++;
    }

    printf("%d", lcm);

    return 0;
}
