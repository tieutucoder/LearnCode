#include <iostream>
using namespace std;

int main () {
  int nam;
  cin >> nam;
  (nam <= 100) ? cout << 1 : ((nam%100==0) ? cout << nam/100 : cout << (nam/100)+1);

  return 0;
}