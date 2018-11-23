#include<iostream>
using namespace std;
class mother
{
public:
    void display()
    {
        cout<<"Mother: display function\n";
    }
};
class daughter : public mother
{
public:
    void display()
    {
        cout<<"Daughter: Display Function\n";
    }
};
int main()
{
    daughter agarwal;
    agarwal.display();
    return 0;
}
