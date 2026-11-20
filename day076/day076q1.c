#include <stdio.h>
int main(void){char filename[256],line[500];if(scanf("%255s",filename)!=1)return 0;FILE *f=fopen(filename,"r");if(!f){puts("Error: File does not exist!");return 1;}puts("File opened successfully.");while(fgets(line,sizeof line,f))fputs(line,stdout);fclose(f);return 0;}
