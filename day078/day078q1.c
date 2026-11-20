#include <stdio.h>
#include <ctype.h>
int main(void){char filename[256];if(scanf("%255s",filename)!=1)return 0;FILE *f=fopen(filename,"r");if(!f){perror(filename);return 1;}long v=0,con=0;int c;while((c=fgetc(f))!=EOF){c=tolower((unsigned char)c);if(c>='a'&&c<='z'){if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;else con++;}}fclose(f);printf("Vowels: %ld\nConsonants: %ld\n",v,con);return 0;}
