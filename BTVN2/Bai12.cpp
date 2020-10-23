#include <iostream>

using namespace std;

int main()
{
  int a,b;
  cin >> a >> b;
  if(a==b)
    cout << "DRAW";
  if(a<b && b-a<=1)
    cout <<"A WON";
  else if(b<a && a-b<=1)
    cout << "B WON";
  else if(a-b==2)
    cout << "A WON";
  else if(a-b==-2)
    cout << "B WON";
    return 0;
}
