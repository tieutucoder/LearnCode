#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    unsigned int a, b;
	cin >> a >> b;
	for (int i = 0; i < INT_MAX; i++)
	{
		if (a == b)
		{
			cout << "FALSE"; break;
		}
		else
		{
			a = a + 1; b = b - 1;
			if (a == INT_MAX || b == INT_MAX) {
				cout << "TRUE"; break;
			}
		}
	}
	
}
