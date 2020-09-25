#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year%4==1) {
        cout << 3;
    } else if (year%4==2 ) {
        cout << 2;
    } else if (year%4==3) {
        cout << 1;
    } else {
        cout <<0;
    }
    return 0;
}


