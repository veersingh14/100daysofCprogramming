#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[2000];
    if (!fgets(s, sizeof s, stdin))
        return 0;
    int start = 1;
    for (int i = 0; s[i]; i++) {
        unsigned char c = s[i];
        if (isspace(c))
            start = 1;
        else if (start) {
            s[i] = toupper(c);
            start = 0;
        } else
            s[i] = tolower(c);
    }
    fputs(s, stdout);
    return 0;
}
