#include <stdio.h>
#include <ctype.h>
int main(void){char s[300];if(!fgets(s,sizeof s,stdin))return 0;int start=1;for(int i=0;s[i];i++){if(isspace((unsigned char)s[i]))start=1;else if(start){printf("%c.",toupper((unsigned char)s[i]));start=0;}}puts("");return 0;}
