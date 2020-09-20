#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    (year%100 == 0)?(cout <<year/100):(cout <<(year/100)+1);
    return 0;
}

