#include<stdio.h>
void week(int * ,int*);
void week(int *a,int *c)
{
int b;
b=*a%*c;
if(b==0)
printf("%d",*a);
else
printf("%d",*a+*c-b);
}
void main()
{
int i,j;
printf("Enter the value of i and j");
scanf("%d%d",&i,&j);
week(&i,&j);
}
