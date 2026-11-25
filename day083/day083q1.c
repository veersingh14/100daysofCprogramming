#include <stdio.h>
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main(void) {
    const char *names[] = {"",     "January", "February",  "March",   "April",    "May",     "June",
                           "July", "August",  "September", "October", "November", "December"};
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year;
    if (scanf("%d", &year) != 1)
        return 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        days[FEBRUARY] = 29;
    for (enum Month m = JANUARY; m <= DECEMBER; m++)
        printf("%s: %d days\n", names[m], days[m]);
    return 0;
}
