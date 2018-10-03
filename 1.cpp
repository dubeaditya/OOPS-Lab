#include<iostream>
using namespace std;
int size;
class student
{
    int roll,sub1,sub2,sub3,total;
    static int t,hs1,hs2,hs3,r1,r2,r3,rt;
public:
    student()
    {
        roll = 0;
        sub1 = sub2 = sub3 = 0;
    }
    void getdata()
    {
        cout<<"Enter Roll No.: ";
        cin>>roll;
        cin>>sub1>>sub2>>sub3;
        total = sub1+sub2+sub3;
        if(sub1>hs1)
        {
            hs1=sub1;
            r1=roll;
        }
        if(sub2>hs2)
        {
            r2=roll;
            hs2=sub2;
        }
        if(sub3>hs3)
        {
            r3=roll;
            hs3=sub3;
        }
        if(total>t)
        {
            t=total;
            rt=roll;
        }
    }
    void display()
    {
        cout<<roll<<" ="<<total<<endl;
    }
    static void highest()
    {
        cout<<"The highest marks are: "<<endl;
        cout<<"Subject 1: "<<hs1<<" By Roll No. "<<r1<<endl;
        cout<<"Subject 2: "<<hs2<<" By Roll No. "<<r2<<endl;
        cout<<"Subject 3: "<<hs3<<" By Roll No. "<<r3<<endl;
    }
    static void high_total()
    {
        cout<<"\n The Highest Total Marks are: "<<endl;
        cout<<t<<" By Roll No. "<<rt;
    }
};
int student::hs1=0;
int student::hs2=0;
int student::hs3=0;
int student::r1=0;
int student::r2=0;
int student::r3=0;
int student::t=0;
int student::rt=0;
int main()
{
    student *s;
    cout<<" How many students you want to enter:";
    cin>>size;
    s=new student [size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter info. of student "<<i+1<<":\n";
        s[i].getdata();
    }

   cout<<"\n\nTotal marks obtained by each student :\n";
   for(int i=0;i<size;i++)
   {
       s[i].display();
   }
   student::highest();
   student::high_total();
}
