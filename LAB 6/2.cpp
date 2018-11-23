#include<iostream>
using namespace std;
class student
{
protected:
    string nos,deg;
public:
    void getdata()
    {
        cout<<"enter the name of student"<<endl;
        cin>>nos;
        cout<<"enter the degree pursuing"<<endl;
        cin>>deg;
    }
    void display()
    {
        cout<<nos<<"degree"<<deg<<endl;
    }

};
class employee
{
protected:
    string ename;
    int eno;
public:
    void getdata()
    {
        cout<<"enter employee name"<<endl;
        cin>>ename;
        cout<<"enter emp no."<<endl;
        cin>>eno;
    }
    void display()
    {
        cout<<ename<<"eno."<<eno<<endl;
    }
};
class manager:public employee,public student
{
private:
    string title;
    int dues;
public:
    void getdata()
    {
        cout<<"enter the title"<<endl;
        cin>>title;
        cout<<"enter amt due"<<endl;
        cin>>dues;
        student::getdata();
        employee::getdata();
    }
    void display()
    {
        cout<<title<<"amt dues"<<dues<<endl;
    }

};
class scientist:public employee,public student
{
private:
    int np;
public:
    void getdata()
    {
        cout<<"enter the no. of publications"<<endl;
        cin>>np;
        student::getdata();
        employee::getdata();
    }
    void display()
    {
        cout<<"publications"<<np;
    }
};
class laborer:public employee
{

};
int main()
{
    manager s;
    s.getdata();
    s.display();
    s.student::display();
    scientist m;
    m.getdata();
    m.display();
    m.student::display();
    m.employee::display();
    manager f;
    f.getdata();
    f.display();
    f.student::display();
    f.employee::display();
    laborer l;
    l.getdata();
    l.display();
    l.employee::display();
    return 0;

}
