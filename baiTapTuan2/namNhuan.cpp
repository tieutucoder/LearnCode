#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year < 0){
         if (year % 4 == -1 || year == -1) {
            if (((year+1)%100==0 && year%400!=0)&& year!=(-1)){
                    cout << 5;
            } else {
                    cout <<1;
            }
        }
        else if (year % 4 == -2 || year == -2) {
            if (((year+2)%100==0 && year%400!=0)&& year!=(-2)){
                    cout << 6;
            } else {
                    cout <<2;
            }
        }
        else if (year % 4 == -3 || year == -3) {
            if (((year+3)%100==0 && year%400!=0)&& year!=(-3)){
                    cout << 7;
            } else {
                    cout <<3;
            }
        }  else {
            if ((year%100==0 && year%400!=0)){
                cout << 4;
            } else if (year%(-4)==0){
                cout << 0;
            }
        }
    } else {
        if (year % 4 == 1 || year == 1) {
            if ((year+3)%100==0 && year%400!=0){
                    cout << 7;
            } else {
                    cout <<3;
            }
        }
        else if (year % 4 == 2 || year == 2) {
             if ((year+2)%100==0 && year%400!=0){
                    cout << 6;
            } else {
                    cout <<2;
            }
        }
        else if (year % 4 == 3 || year == 3) {
             if ((year+1)%100==0 && year%400!=0){
                    cout << 5;
            } else {
                    cout <<1;
            }
        }
        else {
            if ((year%100==0 && year%400!=0)){
                cout << 4;
            } else if (year%4==0||year==0){
                cout << 0;
            }
        }
    }
    return 0;
}
