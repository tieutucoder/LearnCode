/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
< 
>
###End banned keyword*/
#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    double a, b;
    cin >> a >> b;

    cout << 
      (a+b + abs(a-b))/2
    << endl;
    return 0;
}