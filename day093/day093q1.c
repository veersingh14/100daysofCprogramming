#include <stdio.h>
struct Student{char name[100];int roll_no;float marks;};
int main(void){int n;struct Student s[100];if(scanf("%d",&n)!=1||n<1||n>100)return 0;for(int i=0;i<n;i++)if(scanf("%99s %d %f",s[i].name,&s[i].roll_no,&s[i].marks)!=3)return 0;int best=0;for(int i=1;i<n;i++)if(s[i].marks>s[best].marks)best=i;printf("Name: %s, Roll: %d, Marks: %.2f\n",s[best].name,s[best].roll_no,s[best].marks);return 0;}
