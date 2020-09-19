//"Tà tữa"
#include <iostream>
using namespace std;

int main ()
{
  int x,y,gia_x,gia_y,sodu;
  cin >> x >> y >> gia_x >> gia_y;
  sodu = 500000 - gia_x*x - gia_y*y;
  cout << "So tien ma ban Nguyen nhan lai " << sodu;
  return 0;
}

//Ko sử dụng cấu trúc câu lệnh nào ngoài cin, cout và các phép tính
