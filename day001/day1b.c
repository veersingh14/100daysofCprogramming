#include <stdio.h>
int main() {
float a, b, sum, mul, div, sub;
printf("Enter the value of a: ");
scanf("%f", &a);
printf("Enter the value of b: ");
scanf("%f", &b);

sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;

printf("Addition of %.2f and %.2f is %.2f\n", a, b, sum);
printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, mul);
printf("Division of %.2f and %.2f is %.2f\n", a, b, div);
printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, sub);
return 0;
}
