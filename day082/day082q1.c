#include <stdio.h>
enum Light{RED,YELLOW,GREEN};
int main(void){int x;if(scanf("%d",&x)!=1)return 0;switch((enum Light)x){case RED:puts("Stop");break;case YELLOW:puts("Wait");break;case GREEN:puts("Go");break;default:puts("Invalid light");}return 0;}
