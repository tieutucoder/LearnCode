#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    if((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b))
        cout << "1";
    else
        cout << "0";
    return 0;
}
