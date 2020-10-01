#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    float dToan, dLy, dHoa, DTB;
    cin >> dToan >> dLy >> dHoa;
    DTB = (dToan+dLy+dHoa)/3;
    cout << "DTB = " << setprecision(2) << DTB << endl << "LOAI: ";
    (DTB >=9 && DTB <=10) ? (cout << "XUAT SAC") : ((DTB >= 8) ? (cout << "GIOI") : ((DTB >= 7) ? cout << "KHA" : ((DTB >= 6) ? cout << "TB KHA" : ((DTB >= 5) ? cout << "TB" : ((DTB >= 4) ? cout << "YEU" : cout << "KEM")))));
}