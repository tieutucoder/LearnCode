#include <iostream>
using namespace std;

int main() {
	int a, b, c, delta;
	cin >> a >> b >> c;
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		int n1, n2;
		n1 = (-b + sqrt(delta)) / 2 * a;
		n2 = (-b - sqrt(delta)) / 2 * a;
		(n1 > n2) ? cout << "{" << n2 << ", " << n1 << "}" : cout << "{" << n1 << ", " << n2 << "}";
	}
	else if (delta == 0) {
		cout << "{" << -b / 2 * a << "}";
	}
	else {
		cout << "Ø";
	}
}
