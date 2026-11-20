#include <stdio.h>
enum Color{RED,GREEN,BLUE,YELLOW};
int main(void){const char *names[]={"RED","GREEN","BLUE","YELLOW"};for(enum Color c=RED;c<=YELLOW;c++)printf("%s = %d\n",names[c],c);return 0;}
