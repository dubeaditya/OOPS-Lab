#include<iostream>
#include<string.h>
using namespace std;
class movie
{
    char title[30],director[30];
    int year;
public:
    void settitle(char[]);
    void setyear(int);
    void setdirector(char[]);
    void display()
    {
        cout<<"My Favorite Movie :\n";
        cout<<"Title : "<<title;
        cout<<"\nDirector : "<<director;
        cout<<"\nYear : "<<year;
    }
};
void movie::settitle(char str[])
{
    strcpy(title,str);
}
void movie::setyear(int y)
{
    year=y;
}
void movie::setdirector(char drc[])
{
    strcpy(director,drc);
}
int main()
{
    movie myfavoritemovie;
    myfavoritemovie.settitle((char*)"Avengers Infinity War");
    myfavoritemovie.setdirector((char*)"Russo Brothers");
    myfavoritemovie.setyear(2018);
    myfavoritemovie.display();
}
