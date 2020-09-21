/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
;
###End banned keyword*/
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    double x;


    cin >> x;
    cout <<
       setprecision(15) << M_PI*2*x << endl << M_PI*x*x
      << endl;
    return 0;
}
