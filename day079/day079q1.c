#include <stdio.h>
int main(void){FILE *f=fopen("numbers.txt","r");if(!f){perror("numbers.txt");return 1;}long long sum=0;int x,n=0;while(fscanf(f,"%d",&x)==1){sum+=x;n++;}fclose(f);if(n)printf("Sum: %lld\nAverage: %.2f\n",sum,(double)sum/n);else puts("No numbers found.");return 0;}
