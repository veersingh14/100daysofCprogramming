#include <stdio.h>
#include <string.h>
int main(void){char name[200];int age;if(!fgets(name,sizeof name,stdin))return 0;name[strcspn(name,"\n")]=0;if(scanf("%d",&age)!=1)return 0;FILE *f=fopen("info.txt","w");if(!f){perror("info.txt");return 1;}fprintf(f,"Name: %s\nAge: %d\n",name,age);fclose(f);puts("Data saved successfully.");return 0;}
