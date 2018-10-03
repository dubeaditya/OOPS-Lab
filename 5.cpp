#include<iostream>
using namespace std;
class rectangle
{
   int length,width;
public:
    void getdata(int a,int b)
    {
        length = a;
        width = b;
    }
    void showdata()
    {
        cout<<"Area is: "<<length*width<<"Perimeter is: "<<2*(length+width)<<endl;
    }
};
int main()
{
    rectangle r1,r2;
    r1.getdata(5,6);
    r2.getdata(4,7);
    cout<<"Rectangle R1 is: ";
    r1.showdata();
    cout<<"Rectangle R2 is: ";
    r2.showdata();
}
