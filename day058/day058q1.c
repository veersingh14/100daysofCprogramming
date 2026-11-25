#include <stdio.h>
int main(void) {
    int n, a[10000];
    long long ans[10000], p = 1;
    if (scanf("%d", &n) != 1 || n < 0 || n > 10000)
        return 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        ans[i] = p;
        p *= a[i];
    }
    p = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= p;
        p *= a[i];
    }
    printf("[");
    for (int i = 0; i < n; i++)
        printf("%s%lld", i ? "," : "", ans[i]);
    puts("]");
    return 0;
}
