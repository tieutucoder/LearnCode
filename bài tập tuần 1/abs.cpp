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
int main() {
    float x;
    std::cin >> x;
    (x<0)?(std::cout <<(0-x)):(std::cout << x);
    return 0;
}
