#include <stdio.h>
int main(void) {
    FILE *f = fopen("info.txt", "r");
    char line[500];
    if (!f) {
        perror("info.txt");
        return 1;
    }
    while (fgets(line, sizeof line, f))
        fputs(line, stdout);
    fclose(f);
    return 0;
}
