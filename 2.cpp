#include<iostream>
#include<stdio.h>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("a=%d\nb=%d\n",a,b);
}
void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
