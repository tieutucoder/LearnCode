#include <iostream>
using namespace std;

int main() {
  unsigned int nam, count;
  cin >> nam;
  count = nam;
  
  if ((!(nam%100==0) && nam%4==0) || (nam%100==0 && nam%400==0)) {
    cout << 0;
  } else {
    loop:
      if ((!(count%100==0) && count%4==0) || (count%100==0 && count%400==0)) {
        cout << count - nam;
      } else {
        count++;
        goto loop;
      };
  };
}