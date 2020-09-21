#include <iostream>
using namespace std;

int main()
{
    int month;
    cin >> month;
    (month <= 10)?(cout <<(10-month)):((month == 11)?(cout <<month):(cout <<month-2));
    return 0;
}

