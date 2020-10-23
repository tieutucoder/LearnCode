#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int  max;
    (a<b && c<b?max=b:true);
    (a>b && a>c?max=a:true);
    (c>b && c>a?max=c:true);
    cout<<max;
    return 0;
}
