#include <stdio.h>
int main(void) {
    int n, a[10000], target;
    if (scanf("%d", &n) != 1 || n < 0 || n > 10000)
        return 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
    puts("-1 -1");
    return 0;
}
