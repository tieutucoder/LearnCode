#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a;
    int d=a/4;
    double c=a/100;
    if(a%400==0 || (a%4==0 && a%100!=0))
        		cout<<"0";
    else if(a==c*100 && a%400!=0)
                cout<<"4";
    else if(a%4!=0 || a%400!=0 || a%100==0)
    {
                if((a+10)/100>(a/100))
                cout<<(4*(d+1)-a+4);
                else
				cout<<(4*(d+1)-a);
	}
    else
        		cout<<"0";
    
    return 0;
}
