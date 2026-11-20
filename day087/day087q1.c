#include <stdio.h>
enum Role{ADMIN,USER,GUEST};
int main(void){int x;if(scanf("%d",&x)!=1)return 0;switch((enum Role)x){case ADMIN:puts("Welcome, Admin");break;case USER:puts("Welcome, User");break;case GUEST:puts("Welcome, Guest");break;default:puts("Invalid role");}return 0;}
