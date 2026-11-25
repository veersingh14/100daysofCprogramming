#include <stdio.h>
struct Student {
    char name[100];
    int roll_no;
    float marks;
};
int main(void) {
    struct Student s[5];
    for (int i = 0; i < 5; i++)
        if (scanf("%99s %d %f", s[i].name, &s[i].roll_no, &s[i].marks) != 3)
            return 0;
    for (int i = 0; i < 5; i++)
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll_no, s[i].marks);
    return 0;
}
