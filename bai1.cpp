#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << "FALSE";
	}
	else {
		int temp;

		if (a > b)
		{
			temp = a - b;
		}
		else
		{
			temp = b - a;
		}

		if ((temp % 2) != 0)
		{
			cout << "TRUE";
		}
		else
		{
			cout << "FALSE";
		}
	}
	return 0;
}