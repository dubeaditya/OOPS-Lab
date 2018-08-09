#include<stdio.h>
#include<math.h>
void square(void);
void square()
{
int i,sq;
for(i=1000;i<10000;i++)
{
if(i%10==(i/10)%10&&(i/100)%10==(i/1000)%10)
{
sq=sqrt(i);
if((sq*sq)==i)
printf("%d\n",i);
}
}
}
void main()
{
square();
}
