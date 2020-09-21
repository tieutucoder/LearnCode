/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
while
switch
for
###End banned keyword*/
#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    (A*A==B*B+C*C||B*B==A*A+C*C||C*C==A*A+B*B)?(cout << 1):(cout << 0);
    return 0;
}
