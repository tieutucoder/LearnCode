#include <iostream>

using namespace std;

int main() {
	int nam, sodu; cin >> nam;
	if (nam > 0) {
		switch ((nam % 60) % 12) {
			case 0: cout << "THAN"; break;
			case 1: cout << "DAU"; break;
			case 2: cout << "TUAT"; break;
			case 3: cout << "HOI"; break;
			case 4: cout << "TY'"; break;
			case 5: cout << "SUU"; break;
			case 6: cout << "DAN"; break;
			case 7: cout << "MAO"; break;
			case 8: cout << "THIN"; break;
			case 9: cout << "TY."; break;
			case 10: cout << "NGO"; break;
			case 11: cout << "MUI"; break;
		}
	}
	else {
		nam = nam * -1;
		(nam / 1000 == 0) ? sodu = (nam / 100) % 3 : sodu = ((nam / 1000) + (nam - 1000) % 100) % 3;
		(nam % 100 > 12) ? nam = (nam % 100) % 12 : nam = nam;
		switch (sodu)
		{
		case 0: switch (nam % 100)
		{
			case 0: cout << "DAU"; break;
			case 1: cout << "THAN"; break;
			case 2: cout << "MUI"; break;
			case 3: cout << "NGO"; break;
			case 4: cout << "TY."; break;
			case 5: cout << "THIN"; break;
			case 6: cout << "MAO"; break;
			case 7: cout << "DAN"; break;
			case 8: cout << "SUU"; break;
			case 9: cout << "TY'"; break;
			case 10: cout << "HOI"; break;
			case 11: cout << "TUAT"; break;
		} break;
		case 1: switch (nam % 100)
		{
			case 0: cout << "TY."; break;
			case 1: cout << "THIN"; break;
			case 2: cout << "MAO"; break;
			case 3: cout << "DAN"; break;
			case 4: cout << "SUU"; break;
			case 5: cout << "TY'"; break;
			case 6: cout << "HOI"; break;
			case 7: cout << "TUAT"; break;
			case 8: cout << "DAU"; break;
			case 9: cout << "THAN"; break;
			case 10: cout << "MUI"; break;
			case 11: cout << "NGO"; break;
		} break;
		case 2: switch (nam % 100)
		{
			case 0: cout << "SUU"; break;
			case 1: cout << "TY'"; break;
			case 2: cout << "HOI"; break;
			case 3: cout << "TUAT"; break;
			case 4: cout << "DAU"; break;
			case 5: cout << "THAN'"; break;
			case 6: cout << "MUI"; break;
			case 7: cout << "NGO"; break;
			case 8: cout << "TY."; break;
			case 9: cout << "THIN"; break;
			case 10: cout << "MAO"; break;
			case 11: cout << "DAN"; break;
		} break;
		}
	}
}
