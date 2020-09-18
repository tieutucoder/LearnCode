#include <iostream>
using namespace std;

int main ()
{
  int x,y,z,sotien;
  cin >> x >> y >> z;
  if (y < 12) {
    sotien = (x * y * z/100/12) + x;
  } else {
    if (y % 12 == 0) {
      sotien = (x * y/12 * z/100) + x;
    } else {
      sotien = (x * y/12 * z/100) + (x * y%12 * z/100/12) + x;
    }
  };
  cout << "So tien " << sotien;
  return 0;
}