#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int nam, sodu; cin >> nam;
	char CHI[][5] = { "TY'", "SUU", "DAN", "MEO", "THIN", "TY.", "NGO", "MUI", "THAN", "DAU", "TUAT", "HOI" };
	if (nam >= 0) cout << CHI[(nam + 8) % 12];
	else {
		nam = abs(nam);
		(nam / 1000 == 0) ? sodu = (nam / 100) % 3 : sodu = ((abs(nam) / 1000) + abs(nam - 1000 * (abs(nam) / 1000))) % 3;
		(abs(nam) % 100 > 12) ? nam = (abs(nam) % 100) % 12 : nam = abs(nam);
		switch (sodu) {
		case 0: {
			char CHI[][5] = { "DAU", "THAN", "MUI", "NGO", "TY.", "THIN", "MEO", "DAN", "SUU", "TY'", "HOI", "TUAT" };
			cout << CHI[abs(nam) % 100];
			break;
		}
		case 1: {
			char CHI[][5] = { "TY.", "THIN", "MEO", "DAN", "SUU", "TY'", "HOI", "TUAT", "DAU", "THAN", "MUI", "NGO" };
			cout << CHI[abs(nam) % 100];
			break;
		}
		case 2:
		{
			char CHI[][5] = { "SUU", "TY'", "HOI", "TUAT", "DAU", "THAN", "MUI", "NGO", "TY.", "THIN", "MEO", "DAN" };
			cout << CHI[abs(nam) % 100];
			break;
		}
		}
	}
}
