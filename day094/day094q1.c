#include <stdio.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};
void display(struct Student s) {
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}
int main(void) {
    struct Student s;
    if (scanf("%99s %d %f", s.name, &s.roll_no, &s.marks) != 3)
        return 0;
    display(s);
    return 0;
}
