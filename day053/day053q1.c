#include <stdio.h>
int main(void) {
    int n, a[10000];
    long long total = 0, left = 0;
    if (scanf("%d", &n) != 1 || n < 0 || n > 10000)
        return 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    for (int i = 0; i < n; i++) {
        if (left == total - left - a[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += a[i];
    }
    puts("-1");
    return 0;
}
