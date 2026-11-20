#include <stdio.h>
int main(void){int m,n,a[10000],b[10000];if(scanf("%d",&m)!=1||m<0||m>10000)return 0;for(int i=0;i<m;i++)scanf("%d",&a[i]);if(scanf("%d",&n)!=1||n<0||n>10000)return 0;for(int i=0;i<n;i++)scanf("%d",&b[i]);int i=0,j=0,first=1;while(i<m||j<n){int x;if(j==n||(i<m&&a[i]<=b[j]))x=a[i++];else x=b[j++];printf("%s%d",first?"":" ",x);first=0;}puts("");return 0;}
