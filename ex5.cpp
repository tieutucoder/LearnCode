//Ghi các chữ số
#include <iostream>
using namespace std;

int main ()
{
  int songuyen,so1,so2,so3;
  cin >> songuyen;
  so1 = songuyen/100;
  so2 = (songuyen-so1*100)/10;
  so3 = (songuyen-so1*100)-so2*10;
  cout << so1 << "\n" << so2 << "\n"<< so3;
  return 0;
}