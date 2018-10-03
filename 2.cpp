#include<iostream>
#include<cstring>
using namespace std;
class Bank
{
    int acno;
    char nm[100],acctype[100];
    float bal;
public:
    Bank(int acc_no, char *name, char *acc_type, float balance)
    {
        acno = acc_no;
        strcpy(nm,name);
        strcpy(acctype, acc_type);
        bal = balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void Bank::deposit()
{
    int damt1;
    cout<<"\n Enter deposit amount: ";
    cin>>damt1;
    bal+=damt1;
}
void Bank::withdraw()
{
    int wamt1;
    cout<<"\n Enter withdraw amount: ";
    cin>>wamt1;
    if(wamt1>bal)
        cout<<"\n Unsufficient balance";
    bal-=wamt1;
}
void Bank::display()
{
    cout<<"\n Account No. : "<<acno;
    cout<<"\n Name: "<<nm;
    cout<<"\n Account Type: "<<acctype;
    cout<<"\n Balance: "<<bal;
}
int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
        cout<<"\n Enter Details: \n";
        cout<<"\n Accout No. ";
        cin>>acc_no;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Account Type : ";
        cin>>acc_type;
        cout<<"\n Balance : ";
        cin>>balance;
        Bank B1(acc_no, name, acc_type, balance);
        B1.deposit();
        B1.withdraw();
        B1.display();
        return 0;
}
