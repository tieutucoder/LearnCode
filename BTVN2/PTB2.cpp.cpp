#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c,delta,x,x1,x2,t;
    cin >> a >> b >> c;
    if(a==0)
    {
        if(b==0 && c==0)
            cout << "R";
        else if(b==0 && c!=0)
        cout << "∅";
        else if(b!=0)
        cout <<"{"<<(-c/b)<<"}";
    }
    else
    {
        delta=b*b-4*a*c;
        x=-b/(2*a);
        x1=(-b-sqrt(delta))/2*a;
        x2=(-b+sqrt(delta))/2*a;
        if(x1==-0)
            x1=0;
        if(x2==-0)
            x2=0;
        if(x2<x1)
        {
            t=x1;
            x1=x2;
            x2=t;
        }
        if(delta>0)
            cout << "{" << x1 << ", " << x2 << "}";
        else if(delta==0)
            cout << "{" << x << "}";
        else
            cout << "∅";
    }
    return 0;
}
