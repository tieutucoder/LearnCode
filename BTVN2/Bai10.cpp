#include <iostream>

using namespace std;

int main()
{
    long a,b,c,d,e,s=0;
    cin >> a >> b >> c >> d >> e;
    if(e>b)
        s=s+a;
    if((e-b)>=d)
        s=s+c;
    cout << s;
    return 0;
}
