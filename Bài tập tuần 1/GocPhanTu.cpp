#include <iostream>
using namespace std;
int main()
{
    int goc, phanDu;
    cin >> goc;

    phanDu = goc%360;
    if (phanDu <= 90 && phanDu >= 0) {
      cout << 4;
    } else if (phanDu <= 180 && phanDu > 90) {
      cout << 3;
    } else if (phanDu <= 270 && phanDu > 180) {
      cout << 2;
    } else { cout << 1; };

    return 0;
}