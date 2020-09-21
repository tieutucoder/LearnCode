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

    unsigned A, B, C;
    cin >> A >> B >> C;
    (A>B)?(B=A):(A=B);
    (A>C)?(C=A):(A=C);
    cout << A;
    return 0;
}
