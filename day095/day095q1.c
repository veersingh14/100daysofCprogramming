#include <stdio.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};
struct Student topStudent(struct Student a[], int n) {
    struct Student best = a[0];
    for (int i = 1; i < n; i++)
        if (a[i].marks > best.marks)
            best = a[i];
    return best;
}
int main(void) {
    int n;
    struct Student s[100];
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
        return 0;
    for (int i = 0; i < n; i++)
        if (scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks) != 3)
            return 0;
    struct Student top = topStudent(s, n);
    printf("Name: %s, Roll: %d, Marks: %.2f\n", top.name, top.roll_no, top.marks);
    return 0;
}
