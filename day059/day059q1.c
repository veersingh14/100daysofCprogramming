#include <stdio.h>
int main(void){int n,k,a[10000];long long sum=0,best;if(scanf("%d",&n)!=1||n<1||n>10000)return 0;for(int i=0;i<n;i++)scanf("%d",&a[i]);if(scanf("%d",&k)!=1||k<1||k>n)return 0;for(int i=0;i<k;i++)sum+=a[i];best=sum;for(int i=k;i<n;i++){sum+=a[i]-a[i-k];if(sum>best)best=sum;}printf("%lld\n",best);return 0;}
