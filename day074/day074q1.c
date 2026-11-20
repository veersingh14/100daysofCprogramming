#include <stdio.h>
#include <string.h>
int main(void){char src[256],dst[256];if(scanf("%255s %255s",src,dst)!=2)return 0;if(strcmp(src,dst)==0){puts("Source and destination must differ.");return 1;}FILE *a=fopen(src,"rb");if(!a){perror(src);return 1;}FILE *b=fopen(dst,"wb");if(!b){perror(dst);fclose(a);return 1;}int c;while((c=fgetc(a))!=EOF)fputc(c,b);int err=ferror(a)||ferror(b);fclose(a);if(fclose(b)!=0)err=1;puts(err?"Copy failed.":"File copied successfully.");return err;}
