#include<iostream>
#include<stdio.h>
using namespace std;
void minimax(int array[],int length, int &min, int &max);
int main()
{
   int ar[10],max,min;
   int s=10;
   printf("Enter 10 values\n");
   for(int i=0;i<10;i++)
   {
       scanf("%d",&ar[i]);
   }
   minimax(ar,s,min,max);
   printf("max=%d\nmin=%d",max,min);
   return 0;
}
void minimax(int array[],int length, int &min, int &max)
{
    max=array[0];
    min=array[0];
    for(int i=0;i<10;i++)
    {
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];
    }
}

