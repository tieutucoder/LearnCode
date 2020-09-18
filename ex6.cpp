//Tính toán
#include <iostream>
using namespace std;

int main ()
{
  int so1,so2,tong,hieu,tich,thuong;
  cin >> so1 >> so2;
  tong = so1+so2;
  hieu = so1-so2;
  tich = so1*so2;
  if (so2 == 0) {
    if (so1 > 0) {
        cout << tong << "\n" << hieu << "\n" << tich << "\n" << "pos inf";
    } else if (so1 < 0) {
        cout << tong << "\n" << hieu << "\n" << tich << "\n" << "neg inf";
    } else {
      cout << tong << "\n" << hieu << "\n" << tich << "\n" << "null";
    }
  } else {
    thuong = so1/so2;
    cout << tong << "\n" << hieu << "\n" << tich << "\n" << thuong;
  }
  return 0;
}