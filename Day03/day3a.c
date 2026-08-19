#include <stdio.h>
int main() {
float celsius, fahrenheit;
printf("Enter the value in celsius: ");
scanf("%f", &celsius);

fahrenheit=(celsius*9/5)+32;

printf("Celsius to fahrenheit value is: %.2f\n", fahrenheit);
return 0;
}
