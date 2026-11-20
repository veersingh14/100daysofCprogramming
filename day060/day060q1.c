#include <stdio.h>
int main(void){int n,k,a[10000];if(scanf("%d",&n)!=1||n<1||n>10000)return 0;for(int i=0;i<n;i++)scanf("%d",&a[i]);if(scanf("%d",&k)!=1||k<1||k>n)return 0;for(int i=0;i+k<=n;i++){int mx=a[i];for(int j=i+1;j<i+k;j++)if(a[j]>mx)mx=a[j];printf("%s%d",i?" ":"",mx);}puts("");return 0;}
