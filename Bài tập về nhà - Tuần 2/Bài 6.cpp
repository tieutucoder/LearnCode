#include <iostream>
using namespace std;

int main() {
	int m1, m2, m3, m4;
	string check = "TRUE";
	cin >> m1 >> m2 >> m3 >> m4;

	(m1 < 5000000) ? check = "FALSE" : check = check;
	(m2 < 5000000) ? check = "FALSE" : check = check;
	(m3 < 5000000) ? check = "FALSE" : check = check;
	(m4 < 5000000) ? check = "FALSE" : check = check;
	((m2 - m1 > 20000000) || (m2 - m1) * -1 > 20000000) ? check = "FALSE" : check = check;
	((m3 - m1 > 20000000) || (m3 - m1) * -1 > 20000000) ? check = "FALSE" : check = check;
	((m4 - m1 > 20000000) || (m4 - m1) * -1 > 20000000) ? check = "FALSE" : check = check;
	((m3 - m2 > 20000000) || (m3 - m2) * -1 > 20000000) ? check = "FALSE" : check = check;
	((m4 - m2 > 20000000) || (m4 - m2) * -1 > 20000000) ? check = "FALSE" : check = check;
	((m4 - m3 > 20000000) || (m4 - m3) * -1 > 20000000) ? check = "FALSE" : check = check;

	((m1 + m2 + m3 + m4) < 100000000) ? check = "FALSE" : check = check;
	cout << check;
}
