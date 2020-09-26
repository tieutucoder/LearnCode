/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;

int main()
{
    double a;
    int n;
    cin >> a >> n;
    double mang[n];
    double b, min = a - int(a);

    for(int i=0; i<n; i++) {
      mang[i] = (double)i/n;
      if (a - int(a) - mang[i] < 0) {
        if ((a - int(a) - mang[i])*-1 < min) {
          min = a - int(a) - mang[i];
          b = mang[i];
        }
      } else {
        if (a - int(a) - mang[i] < min) {
          min = a - int(a) - mang[i];
          b = mang[i];
        }
      };
    }
    cout << (int)a;            
    for (int j=0; j<n; j++) {
      if ((double)j/n == b) {
        cout << " " << j << "/" << n;
      }
    };
}
