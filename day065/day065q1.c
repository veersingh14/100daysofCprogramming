#include <stdio.h>
#include <string.h>
int main(void){char a[10000],b[10000];int count[26]={0};if(scanf("%9999s %9999s",a,b)!=2)return 0;if(strlen(a)!=strlen(b)){puts("Not Anagram");return 0;}for(int i=0;a[i];i++){if(a[i]<'a'||a[i]>'z'||b[i]<'a'||b[i]>'z'){puts("Not Anagram");return 0;}count[a[i]-'a']++;count[b[i]-'a']--;}for(int i=0;i<26;i++)if(count[i]){puts("Not Anagram");return 0;}puts("Anagram");return 0;}
