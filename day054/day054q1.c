#include <stdio.h>
#include <math.h>
int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1 || n < 1)
        return 0;
    long long sum = n * (n + 1) / 2;
    long long x = (long long)sqrtl((long double)sum);
    while (x * x < sum)
        x++;
    printf("%lld\n", x * x == sum ? x : -1LL);
    return 0;
}
