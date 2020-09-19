#include <iostream>
using namespace std;

int main ()
{
  int x,y,z,sotien;
  cin >> x >> y >> z;
  sotien = (x * y * z/100/12) + x;
  cout << "So tien " << sotien;
  return 0;
}
