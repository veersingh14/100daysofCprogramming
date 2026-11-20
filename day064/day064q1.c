#include <stdio.h>
#include <string.h>
int main(void){char s[10000];int last[256],left=0,best=0;for(int i=0;i<256;i++)last[i]=-1;if(scanf("%9999s",s)!=1)return 0;for(int i=0;s[i];i++){unsigned char c=s[i];if(last[c]>=left)left=last[c]+1;last[c]=i;if(i-left+1>best)best=i-left+1;}printf("%d\n",best);return 0;}
