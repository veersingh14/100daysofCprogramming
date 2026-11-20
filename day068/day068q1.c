#include <stdio.h>
int main(void){int n,x;long long sum=0;if(scanf("%d",&n)!=1||n<0)return 0;for(int i=0;i<n;i++){scanf("%d",&x);sum+=x;}printf("%lld\n",(long long)n*(n+1)/2-sum);return 0;}
