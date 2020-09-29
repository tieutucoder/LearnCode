#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d;
    cin>>a>>b;
    d=((a-((int)a))/(1/b));
    if((d-((int)d)%1)>1/2)
        d=(int)d+1;
    cout<<(int)a<<" "<<d<<"/"<<b;
    return 0;
}
