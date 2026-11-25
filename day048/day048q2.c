#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000];
    if (!fgets(s, sizeof s, stdin))
        return 0;
    int n = strlen(s);
    for (int i = 0; i < n;) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
            putchar(s[i++]);
            continue;
        }
        int j = i;
        while (j < n && s[j] != ' ' && s[j] != '\n' && s[j] != '\t')
            j++;
        for (int k = j - 1; k >= i; k--)
            putchar(s[k]);
        i = j;
    }
    return 0;
}
