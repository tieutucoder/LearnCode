/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
;
###End banned keyword*/
#include <iostream>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int x;

    cin >> x;
    
    cout << 
      x/100 <<
      "\n" << (x-(x/100)*100)/10 << "\n" <<
      (x-(x/100)*100)-((x-(x/100)*100)/10)*10
    << endl;
    return 0;
}
