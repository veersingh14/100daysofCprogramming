#include <stdio.h>
#include <string.h>
int main(void) {
    char s[300];
    if (!fgets(s, sizeof s, stdin))
        return 0;
    s[strcspn(s, "\n")] = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                putchar(s[k]);
            putchar('\n');
        }
    return 0;
}
