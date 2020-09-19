#include <iostream>
using namespace std;

int main()
{
    int soTien, kyHang;
    float laiSuat;
    cin >>soTien >> kyHang >> laiSuat;
    soTien = soTien + soTien * (kyHang*(laiSuat/100))/12;
    //công thức thứ 2 tút gọn nhưng không ra số chẵn?
    //soTien = soTien * (1 + (kyHang*(laiSuat/100))/12);
    cout <<soTien;
    return 0;
}

