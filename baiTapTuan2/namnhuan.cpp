#include <iostream>

using namespace std;

int main()
{
    int a,b,d=a/4;
    cin>>a;
    double c=a/100;
    if(a%400==0)
        		cout<<"0";
    else if(a%4==0 && a%100!=0)
    {
        if(a==c*100 && a%400!=0)
                cout<<"4";
        else if(a%400==0)
                cout<<"0";
    }
        else
                cout<<(4*(d+1)-a);
    return 0;
}
