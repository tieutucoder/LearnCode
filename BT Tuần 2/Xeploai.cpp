#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double Math, Physics, Chemistry, Average;;
    cin >> Math >> Physics >> Chemistry;
    Average = (Math + Physics + Chemistry)/ 3;
    if(Average-(int)Average==0){
        Average=(int)Average;
        cout << "DTB = " << Average << endl;
    }
    else
        cout << "DTB = " << fixed << setprecision(2) << Average << endl;

    if(Average >= 9) {
        cout << "Loai: XUAT SAC";
    } else if(Average>=8){
        cout << "Loai: GIOI";
    } else if(Average>=7){
        cout << "Loai: KHA";
    } else if(Average>=6){
        cout << "Loai: TB KHA";
    } else if(Average>=5){
        cout << "Loai: TB";
    } else if(Average>=4){
        cout << "Loai: YEU";
    } else {
        cout << "Loai: KEM";
    }
    return 0;

}
