#include <stdio.h>
int main() {
float radius, area, circumference;
printf("Enter the value of radius: ");
scanf("%f", &radius);

area=3.14*radius*radius;
circumference=2*3.14*radius;

printf("Area of circle is: %.2f\n ", area);
printf("Perimeter of circle is: %.2f\n ", circumference);
return 0;
}
