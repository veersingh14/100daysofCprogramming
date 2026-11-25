#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n, a[10000];
    if (scanf("%d", &n) != 1 || n < 1 || n > 10000)
        return 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] == a[j]) {
                printf("%d\n", a[i]);
                return 0;
            }
    puts("-1");
    return 0;
}
