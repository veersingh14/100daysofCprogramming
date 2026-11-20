#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){int x=*(const int*)a,y=*(const int*)b;return (x>y)-(x<y);}
int main(void){int n,k,a[10000];if(scanf("%d",&n)!=1||n<1||n>10000)return 0;for(int i=0;i<n;i++)scanf("%d",&a[i]);if(scanf("%d",&k)!=1||k<1||k>n)return 0;qsort(a,n,sizeof a[0],cmp);printf("%d\n",a[k-1]);return 0;}
