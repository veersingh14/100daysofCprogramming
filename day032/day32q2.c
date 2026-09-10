#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int i, max = 0, result = 0;

    scanf("%d", &n);

    // Count each digit
    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    // Find digit with maximum count
    for (i = 0; i <= 9; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Digit = %d\n", result);
    printf("Occurrences = %d", max);

    return 0;
}
