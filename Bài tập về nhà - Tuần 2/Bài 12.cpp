#include <iostream>
using namespace std;

int main()
{
    int pler1, pler2;
    cin >> pler1 >> pler2;
	switch (pler1)
		{
		case 0: {
			(pler2 == 1) ? cout << "A WON" : (pler2 == 2 ? cout << "B WON" : cout << "DRAW");
			break;
		}
		case 1: {
			(pler2 == 2) ? cout << "A WON" : (pler2 == 0 ? cout << "B WON" : cout << "DRAW");
			break;
		} 
		case 2: {
			(pler2 == 0) ? cout << "A WON" : (pler2 == 1 ? cout << "B WON" : cout << "DRAW");
			break;
		}
	};
}
