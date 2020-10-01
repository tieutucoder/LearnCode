#include <iostream>
using namespace std;

int main()
{
    int Average;
    float Math, Physics, Chemistry;
    cin >> Math >> Physics >> Chemistry;
    Average = (Math + Physics + Chemistry)*100 / 3;
    cout << "DTB = " << Average/100 << "." <<Average%100 <<endl;
    if(Average >= 900) {
        cout << "Loai: XUAT SAC";
    } else if(Average>=800){
        cout << "Loai: GIOI";
    } else if(Average>=700){
        cout << "Loai: KHA";
    } else if(Average>=600){
        cout << "Loai: TB KHA";
    } else if(Average>=500){
        cout << "Loai: TB";
    } else if(Average>=400){
        cout << "Loai: YEU";
    } else {
        cout << "Loai: KEM";
    }
    return 0;
}


