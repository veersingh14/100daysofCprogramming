#include <stdio.h>
int bound(int a[],int n,int x,int upper){int l=0,r=n;while(l<r){int m=l+(r-l)/2;if(a[m]<x||(upper&&a[m]==x))l=m+1;else r=m;}return l;}
int main(void){int n,a[10000],x;if(scanf("%d",&n)!=1||n<0||n>10000)return 0;for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);int l=bound(a,n,x,0);if(l==n||a[l]!=x)puts("-1,-1");else printf("%d,%d\n",l,bound(a,n,x,1)-1);return 0;}
