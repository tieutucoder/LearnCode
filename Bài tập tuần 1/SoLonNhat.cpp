/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
while
for
###End banned keyword*/
#include <iostream>

using namespace std;

int main() {
  int x,y,z;
  cin >> x >> y >> z;
  (x>y) ? ((x>z) ? cout << x : cout << z) : (y<z ? cout << z : cout << y);
  return 0;
}