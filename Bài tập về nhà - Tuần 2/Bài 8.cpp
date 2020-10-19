#include <iostream>

using namespace std;


int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    bool tre, dep, loved, giau;
    cin >> tre >> dep >> loved >> giau;

    cout << ((dep == 1 && loved == 1) || (dep == 0 && loved == 1 && giau == 1 && tre != 1) || (dep == 0 && loved == 0 && giau == 1)) << endl;
    return 0;
}
