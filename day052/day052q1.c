#include <stdio.h>
int main(void) {
    int n, a[10000], x;
    if (scanf("%d", &n) != 1 || n < 0 || n > 10000)
        return 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    int l = 0, r = n;
    while (l < r) {
        int m = l + (r - l) / 2;
        if (a[m] < x)
            l = m + 1;
        else
            r = m;
    }
    printf("%d\n", l == n ? -1 : l);
    return 0;
}
