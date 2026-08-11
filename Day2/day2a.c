#include <stdio.h>
int main() {
float length, breadth, area, perimeter;
printf("Enter the value of length: ");
scanf("%f", &length);
printf("Enter the value of breadth: ");
scanf("%f", &breadth);

area=length*breadth;
perimeter=2*(length+breadth);
printf("Area of rectangle is: %.2f\n ", area);
printf("Perimeter of rectangle is: %.2f\n ", perimeter);

return 0;
}


