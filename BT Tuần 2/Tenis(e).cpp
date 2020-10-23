#include <iostream>

using namespace std;

int main()
{
   int a,b;
   cin >> a >> b;
   if((a==6 && b<6) || (b==6 && a<5) || (a==7 && b>=5) || (b==7 && a>=5))
        cout << "1";
   else
    cout <<"0";
    return 0;
}
