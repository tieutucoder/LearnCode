#include <iostream>
using namespace std;

int main()
{int a,b;
double c;
cin>>a;
(0<a)& (a<=90) ? cout <<'4' : (90<a)& (a<=180) ? cout <<'3' :(180<a)& (a<=270) ? cout <<'2' :cout <<'1';

    return 0;
}
