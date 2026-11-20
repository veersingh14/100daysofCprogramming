#include <stdio.h>
enum Status{SUCCESS,FAILURE,TIMEOUT};
int main(void){int x;if(scanf("%d",&x)!=1)return 0;switch((enum Status)x){case SUCCESS:puts("Operation successful");break;case FAILURE:puts("Operation failed");break;case TIMEOUT:puts("Operation timed out");break;default:puts("Invalid status");}return 0;}
