//"Tà tữa"
#include <iostream>
using namespace std;

int main ()
{
  int x,y,gia_x,gia_y,sodu;
  cin >> x >> y >> gia_x >> gia_y;
  if (gia_x < 500 || gia_y <500) {
    cout << "Menh gia nho nhat la 500d";
  } else {
    sodu = 500000 - gia_x*x - gia_y*y;
    cout << "So tien ma ban Nguyen nhan lai " << sodu;
  };
  return 0;
}
