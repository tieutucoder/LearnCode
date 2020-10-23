#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
using namespace std;
int main()
{
    char a[255];
    cin>>a;
   double q=a*2*M_PI;
   double s=a*a*M_PI;
  cout<<fixed<<setprecision(15)<<q<<endl;
  cout<<s;


    return 0;
}
