#include <stdio.h>
#include <ctype.h>
int main(void) {
    FILE *a = fopen("input.txt", "r");
    if (!a) {
        perror("input.txt");
        return 1;
    }
    FILE *b = fopen("output.txt", "w");
    if (!b) {
        perror("output.txt");
        fclose(a);
        return 1;
    }
    int c;
    while ((c = fgetc(a)) != EOF)
        fputc(toupper((unsigned char)c), b);
    fclose(a);
    fclose(b);
    puts("Uppercase text saved to output.txt");
    return 0;
}
