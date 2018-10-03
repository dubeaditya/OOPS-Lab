#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch='y',op;
    float ans,a,b,c,d;
    while(ch=='y')
    {
        scanf("%f/%f%c%f/%f",&a,&b,&op,&c,&d);
        if(op=='+')
            {
                ans=(((a*d)+(b*c)))/(b*d);
                printf("ans =%.2f",ans);
            }
        else
            if(op=='-')
            {
                ans=(a*d - b*c) / (b*d);
                printf("ans =%.2f",ans);
            }
        else
            if(op=='*')
            {
                ans=(a*c) / (b*d);
                printf("ans =%.2f",ans);
            }
        else
            if(op=='/')
            {
                ans=(a*d) / (b*c);
                printf("ans =%.2f",ans);
            }

        printf("\ndo you wish to continue (y/n):");
        cin>>ch;
    }

}
