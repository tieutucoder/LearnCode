#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tongSoLau, vtLau, vtPhong,max; cin >> tongSoLau >> vtLau >> vtPhong;
    max = tongSoLau;
    string outp;
    int maxArr[9999];
    
    for (int i = 6; i <= tongSoLau *2 + tongSoLau /2; i = i + 2) {
        maxArr[max] = i;
        max--;
    } 

    if (vtLau == tongSoLau) {
        if (vtPhong == 6) {
            if (vtLau == tongSoLau) {
                (vtLau - 1 > 0) ? (cout << -1 << endl << vtLau << " " << vtPhong - 2 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << -1) : (cout << -1 << endl << vtLau << " " << vtPhong - 2 << endl << -1 << endl << -1);
            }
            else {
                (vtLau - 1 > 0) ? (cout << vtLau + 1 << " " << vtPhong + 2 << endl << vtLau << " " << vtPhong - 2 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << -1) : (cout << vtLau + 1 << " " << vtPhong + 2 << endl << vtLau << " " << vtPhong - 2 << endl << -1 << endl << -1);
            }
        }
        else if (vtPhong == 4) {
            (vtLau - 1 > 0) ? (cout << -1 << endl << vtLau << " " << vtPhong - 2 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << vtLau << " " << vtPhong + 2) : (cout << -1 << endl << vtLau << " " << vtPhong - 2 << endl << -1 << vtLau << " " << vtPhong + 2);
        }
    }
    else if (vtPhong == 2) {
        (vtLau - 1 > 0) ? (cout << -1 << endl << -1 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << vtLau << " " << vtPhong + 2) : (cout << -1 << endl << -1 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << vtLau << " " << vtPhong + 2);
    }
    else if (vtPhong == maxArr[vtLau]) {
        (vtLau - 1 > 0) ? (cout << vtLau + 1 << " " << vtPhong - 2 << endl << vtLau << " " << vtPhong - 2 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << -1) : (cout << vtLau + 1 << " " << vtPhong - 2 << endl << vtLau << " " << vtPhong - 2 << endl << -1 << endl << -1);
    }
    else {
        cout << vtLau + 1 << " " << vtPhong - 2 << endl << vtLau << " " << vtPhong - 2 << endl << vtLau - 1 << " " << vtPhong + 2 << endl << vtLau << " " << vtPhong + 2;
    }
}
