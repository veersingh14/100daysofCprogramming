#include <stdio.h>
#include <ctype.h>
int main(void) {
    char filename[256];
    if (scanf("%255s", filename) != 1)
        return 0;
    FILE *f = fopen(filename, "r");
    if (!f) {
        perror(filename);
        return 1;
    }
    long chars = 0, words = 0, lines = 0;
    int c, inword = 0, last = '\n';
    while ((c = fgetc(f)) != EOF) {
        chars++;
        if (c == '\n')
            lines++;
        if (isspace((unsigned char)c))
            inword = 0;
        else if (!inword) {
            words++;
            inword = 1;
        }
        last = c;
    }
    if (chars && last != '\n')
        lines++;
    fclose(f);
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines);
    return 0;
}
