#include <iostream>
using namespace std;

int main()
{
    int ngay, thang, nam;
    string check = "TRUE";
    cin >> ngay >> thang >> nam;
    (ngay > 0 && thang > 0 && thang <= 12 && nam != 0) ? check = check : check = "FALSE";
    if (((thang % 2 != 0 && thang != 9 && thang != 11) || thang == 8 || thang == 10 || thang == 12) && ngay <= 31) {
        check = check;
    }
    else if (thang == 2) {
        ((((!(nam % 100 == 0) && nam % 4 == 0) || (nam % 100 == 0 && nam % 400 == 0)) && ngay <= 29) || (!((!(nam % 100 == 0) && nam % 4 == 0) || (nam % 100 == 0 && nam % 400 == 0)) && ngay <= 28)) ? check = check : check = "FALSE";
    }
    else if ((thang == 4 || thang == 6 || thang == 9) & ngay <= 30) {
        check = check;
    }
    else check = "FALSE";
    cout << check;
}
