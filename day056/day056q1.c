#include <stdio.h>
int main(void) {
    int n, a[10000];
    if (scanf("%d", &n) != 1 || n < 0 || n > 10000)
        return 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int ans = -1;
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[i]) {
                ans = a[j];
                break;
            }
        if (i)
            printf(", ");
        printf("%d", ans);
    }
    puts("");
    return 0;
}
