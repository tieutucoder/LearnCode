#include <iostream>
using namespace std;

int main() {
    int mang[8],x(0),y(0);
	for (int i = 0; i < 8; i++) cin >> mang[i];
	x = mang[0] + mang[1] + mang[2] + mang[3];
	y = mang[4] + mang[5] + mang[6] + mang[7];
	(x == y) ? cout << "Tie" : ((x > y) ? cout << "Nam" : cout << "Nga");
}
