#include <iostream>
using namespace std;
//Tinh
int main () 
{
  int a,b;
  cin>> a >> b;
  cout << a+b << endl;
  cout << a-b << endl;
  cout << a*b << endl;
  b==0 ? (a==0 ? cout << "NULL" : (a<0 ? cout << "negative infinity" : cout << "positive infinity")) : (cout << a/b);
  return 0;
}
