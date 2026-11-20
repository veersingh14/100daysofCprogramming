#include <stdio.h>
int main(void){int d,m,y;const char *mon[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};if(scanf("%d/%d/%d",&d,&m,&y)!=3)return 0;if(m<1||m>12||d<1||d>31){puts("Invalid date");return 0;}printf("%02d-%s-%04d\n",d,mon[m-1],y);return 0;}
