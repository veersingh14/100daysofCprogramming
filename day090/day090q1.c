#include <stdio.h>
enum Gender{MALE=1,FEMALE,OTHER};
struct Person{char name[100];enum Gender gender;};
int main(void){struct Person p;int x;if(scanf("%99s %d",p.name,&x)!=2)return 0;p.gender=(enum Gender)x;const char *g=p.gender==MALE?"Male":p.gender==FEMALE?"Female":p.gender==OTHER?"Other":"Unknown";printf("Name: %s\nGender: %s\n",p.name,g);return 0;}
