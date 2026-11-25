#include <stdio.h>
#include <string.h>
int main(void) {
    char a[1001], b[1001], both[2002];
    if (scanf("%1000s %1000s", a, b) != 2)
        return 0;
    if (strlen(a) != strlen(b)) {
        puts("Not rotation");
        return 0;
    }
    strcpy(both, a);
    strcat(both, a);
    puts(strstr(both, b) ? "Rotation" : "Not rotation");
    return 0;
}
