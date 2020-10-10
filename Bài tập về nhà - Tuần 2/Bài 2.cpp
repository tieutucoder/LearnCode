#include <iostream>
using namespace std;

int main() {
 int nam; cin>>nam;
 (nam>0) ? nam=nam : nam=nam*(-1);
 switch(nam%12) {
    case 0: cout << "THAN"; break;
    case 1: cout << "DAU"; break;
    case 2: cout << "TUAT"; break;
    case 3: cout << "HOI"; break;
    case 4: cout << "TY"; break;
    case 5: cout << "SUU"; break;
    case 6: cout << "DAN"; break;
    case 7: cout << "MAO"; break;
    case 8: cout << "THIN"; break;
    case 9: cout << "TY."; break;
    case 10: cout << "NGO"; break;
    case 11: cout << "MUI"; break;
 }
}
