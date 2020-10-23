#include <iostream>

using namespace std;

int main()
{
   bool tre, dep, loved, giau;
    cin >> tre >> dep >> loved >> giau;
    cout << ((tre==1 && dep == 1 && loved == 1 && giau==1) || (tre==1 && dep == 1 && loved == 1 && giau==0) || (tre==0 &&dep == 0 && loved == 1 && giau == 1)) << endl;
    return 0;
}
