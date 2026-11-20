#include <stdio.h>
#include <string.h>
int main(void){char filename[256],line[1000];if(scanf("%255s",filename)!=1)return 0;int c;while((c=getchar())!='\n'&&c!=EOF){}if(!fgets(line,sizeof line,stdin))return 0;FILE *f=fopen(filename,"a");if(!f){perror(filename);return 1;}fputs(line,f);if(strlen(line)&&line[strlen(line)-1]!='\n')fputc('\n',f);fclose(f);puts("Text appended successfully.");return 0;}
