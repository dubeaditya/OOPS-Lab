#include<iostream>
using namespace std;
class shapes
{
protected:
    int x,y;
public:
    void getdata(int a,int b=0)
    {
        cout<<"enter the two dimensions"<<endl;
        cin>>a>>b;
        x=a;
        y=b;
    }
    virtual void displayarea()
    {
        cout<<"the dimensions are"<<x<<y<<endl;
    }

};
class rectangle:public shapes
{
public:
    void displayarea()
    {

    }
};
class triangle:public shapes
{
public:
    void displayarea()
    {
        cout<<"the triangle area is"<<(x*y)/2<<endl;
    }

};

class circle:public shapes
{
public:
    void displayarea()
    {
        cout<<"the circle area is"<<(3.14*x*y)<<endl;
    }

};
int main()
{
    rectangle r;
    r.getdata(40,60);
    r.displayarea();
    triangle t;
    t.getdata(30,20);
    t.displayarea();
    circle c;
    c.getdata(7,0);
    c.displayarea();
}
