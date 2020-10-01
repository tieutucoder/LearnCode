/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
switch
;
?
###End banned keyword*/

#include <iostream>

int main () {
    unsigned int a, b;
    std::cin >> a >> b ;

    std::cout <<
    (!((a==5||b==5)&&(a==6||b==6)))
    << std::endl;
}
