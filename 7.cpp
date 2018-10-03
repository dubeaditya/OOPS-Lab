#include<iostream>
using namespace std;
struct shirt
{
    int collarsize,sleevelength;
};
struct pants
{
    int waistsize,inseam;
};
void displayclothingfacts(shirt);
void displayclothingfacts(pants);
int main()
{
    shirt s={28,22};
    pants p={32,23};
    displayclothingfacts(s);
    cout<<endl;
    displayclothingfacts(p);
}
void displayclothingfacts(shirt s)
{
    cout<<"SHIRT details: "<<endl<<"collarsize = "<<s.collarsize<<endl<<"sleevelength = "<<s.sleevelength;
}
void displayclothingfacts(pants p)
{
    cout<<"PANTS details: "<<endl<<"waistsize = "<<p.waistsize<<endl<<"inseam = "<<p.inseam;
}

