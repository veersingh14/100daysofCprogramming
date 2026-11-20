#include <stdio.h>
int main(void){int n,x;long long current,best;if(scanf("%d",&n)!=1||n<1)return 0;scanf("%d",&x);current=best=x;for(int i=1;i<n;i++){scanf("%d",&x);current=(current+x>x)?current+x:x;if(current>best)best=current;}printf("%lld\n",best);return 0;}
