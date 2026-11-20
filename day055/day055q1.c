#include <stdio.h>
int main(void){int n,a[10000],candidate=0,count=0,seen=0;if(scanf("%d",&n)!=1||n<1||n>10000)return 0;for(int i=0;i<n;i++){scanf("%d",&a[i]);if(count==0){candidate=a[i];count=1;}else if(a[i]==candidate)count++;else count--;}for(int i=0;i<n;i++)if(a[i]==candidate)seen++;printf("%d\n",seen>n/2?candidate:-1);return 0;}
