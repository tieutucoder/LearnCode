/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
while
for
break
###End banned keyword*/
#include <iostream>

using namespace std;

//###INSERT CODE HERE -

int main () {
  int s1,s2;
  cin >> s1 >> s2;
  cout << s1+s2 << endl;
  cout << s1-s2 << endl;
  cout << s1*s2 << endl;
  s2==0 ? (s1==0 ? cout << "null" : (s1<0 ? cout << "neg inf" : cout << "pos inf")) : (cout << s1/s2);
}
