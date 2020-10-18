#include <iostream>
using namespace std;

int main()
{
    int traDao, cafeSua, giaTraDao, giaCafeSua, tien;
    cin >> traDao >> cafeSua >> giaTraDao >> giaCafeSua;
    tien = 500000 - ((traDao+2)*giaTraDao + cafeSua*giaCafeSua);
    cout <<"so tien ma ban Nguyen nhan lai:"<<tien;
    return 0;
}
