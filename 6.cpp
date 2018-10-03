#include<iostream>
using namespace std;
void movie(char str[], int a=90)
{
    cout<<"Movie name: "<<str<<endl;
    cout<<"Running Time: "<<a<<endl;
}
int main()
{
    char str[]="Infinity War";
    movie(str,185);
    movie(str);
    return 0;
}
