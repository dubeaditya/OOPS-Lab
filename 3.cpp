#include<iostream>
using namespace std;
class DB;
class DM
{
    float meter,centi;
public:
    void getdata()
    {
        cout<<"\nEnter the distance in (meter-centimeter):";
        cin>>meter>>centi;
    }
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<meter<<"meters and"<<centi<<"centimeter";

    }
    friend void add(DM &, DB &);
};
class DB
{
    float inch,feet;
public:
    void getdata()
    {
        cout<<"\nEnter the distance in(feet-inch):";
        cin>>inch>>feet;
    }
    void display()
    {
        cout<<"\nThe distance is:";
        cout<<inch<<"Inches and"<<feet<<"feets";
    }
    friend void add(DM &, DB &);
};
void add(DM &a, DB &b)
{
    int ch;
    cout<<"\n Press 1 for meter-centi:";
    cout<<"\n Press 2 for feet-inch:";
    cout<<"\n Enter your choice:";
    cin>>ch;
    if(ch==1)
    {
        DM d;
        int c=(a.meter*100+a.centi+b.feet*30.48+b.inch*2.54);
  if(c>=100)
  {
   d.meter=c/100;
   d.centi=c%100;
  }
  else
  {
   d.meter=0;
   d.centi=c;
  }
  d.display();
 }
 else
 {
  DB d;
  int i=(a.meter*39.37+a.centi*.3937008+b.feet*12+b.inch);
  if(i>=12)
  {
   d.feet=i/12;
   d.inch=i%12;
  }
  else
  {
   d.feet=0;
   d.inch=i;
  }
  d.display();
 }
}
int main()
{

 DM a;
 DB b;
 a.getdata();
 b.getdata();
 add(a,b);


}


