#include<iostream>
#include<cstring>
using namespace std;
class staff
{
protected:
string codename;
public:
void getvalue()
{cout<<"enter code name"<<endl;
cin>>codename;
}
void display()
{cout<<codename<<endl;
}
};
class teacher : public staff
{
protected:
string sub,pub;
public:
void getvalue()
{cout<<"enter subject opt"<<endl;
cin>>sub;
cout<<"enter publication"<<endl;
cin>>pub;
  staff::getvalue();

}
void display()
{cout<<sub<<"\n"<<pub<<endl;}
};
class typist : public staff
{
protected:
int sp;
public:
void getvalue()
{cout<<"enter the top speed"<<endl;
cin>>sp;
staff::getvalue();}
void display()
{cout<<sp<<endl;

staff::display();
}
};
class officer : public staff
{
protected:
    char grade;
public:
    void getvalue()
    {
        cout<<"enter the grade"<<endl;
        cin>>grade;
        staff::getvalue();
    }
    void display()
    {
        cout<<grade<<endl;
    }
};
class regular: public typist
{

};
class casual: public typist
{
protected:
    double wage;
public:
    void getvalue()
    {
        cout<<"enter the daily wages"<<endl;
        cin>>wage;
        typist::getvalue();
    }
    void display()
    {
        cout<<wage<<endl;
    }
};
int main()
{
    teacher t;
    t.staff::display();
    t.getvalue();
    t.display();
    typist ty;
    ty.staff::display();
    ty.getvalue();
    ty.display();
    officer o;
    o.staff::display();
    o.getvalue();
    o.display();
    regular r;
    r.typist::getvalue();
    r.typist::display();
    casual c;
    c.typist::display();
    c.getvalue();
    c.display();
}
