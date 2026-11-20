#include <stdio.h>
enum Choice{ADD=1,SUBTRACT,MULTIPLY};
int main(void){int choice,a,b;if(scanf("%d %d %d",&choice,&a,&b)!=3)return 0;switch((enum Choice)choice){case ADD:printf("%d\n",a+b);break;case SUBTRACT:printf("%d\n",a-b);break;case MULTIPLY:printf("%d\n",a*b);break;default:puts("Invalid choice");}return 0;}
