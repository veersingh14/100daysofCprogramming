#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char s[300];
    if (!fgets(s, sizeof s, stdin))
        return 0;
    int n = strlen(s);
    while (n && isspace((unsigned char)s[n - 1]))
        s[--n] = 0;
    int last = 0;
    for (int i = 0; i < n; i++)
        if (isspace((unsigned char)s[i])) {
            int j = i;
            while (j < n && isspace((unsigned char)s[j]))
                j++;
            if (j < n)
                last = j;
        }
    int start = 1;
    for (int i = 0; i < last; i++) {
        if (isspace((unsigned char)s[i]))
            start = 1;
        else if (start) {
            printf("%c. ", toupper((unsigned char)s[i]));
            start = 0;
        }
    }
    if (n)
        puts(s + last);
    return 0;
}
