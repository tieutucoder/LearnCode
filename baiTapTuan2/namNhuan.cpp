#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 4 == 1 || year == 1) {
        cout << 3;
    }
    else if (year % 4 == 2 || year == 2) {
        cout << 2;
    }
    else if (year % 4 == 3 || year == 3) {
        cout << 1;
    }
    else {
        if ((year%100==0 && year%400!=0)||year==0){
            cout << 4;
        } else if (year%4==0){
            cout << 0;
        }
    }
    return 0;
}


