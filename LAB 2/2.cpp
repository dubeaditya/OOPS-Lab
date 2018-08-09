#include<iostream>
#include<stdio.h>
using namespace std;
int string_ln(char*);
int main()
{
   char str[20];
   int length;
   cout<<"Enter any string: ";
   gets(str);
   length = string_ln(str);
   cout<<"The length of the given string: " <<str<<'\n'<<length<<'\n';
   cout<<endl;
}
int string_ln(char*p)
{
   int count = 0;
   while (*p != '\0')
    {
      count++;
      p++;
   }
   return count;
}
