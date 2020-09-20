/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
while
abs
for
cmath
stdlib
math
###End banned keyword*/
#include <iostream>
using namespace std;

int main() {
  int x; cin >> x;
  (x<0) ? cout << x*-1 : cout << x;
  return 0;
}