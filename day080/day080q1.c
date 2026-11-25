#include <stdio.h>
int main(void) {
    int n, roll;
    char name[100];
    float marks;
    FILE *f;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
        return 0;
    f = fopen("students.txt", "w");
    if (!f) {
        perror("students.txt");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%99s %d %f", name, &roll, &marks) != 3) {
            fclose(f);
            return 1;
        }
        fprintf(f, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(f);
    f = fopen("students.txt", "r");
    if (!f)
        return 1;
    while (fscanf(f, "%99s %d %f", name, &roll, &marks) == 3)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    fclose(f);
    return 0;
}
