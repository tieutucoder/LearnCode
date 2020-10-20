#include <iostream>
using namespace std;

int main(){
    long a,b;
    cin >> a >> b;
    if((a%2!=0 && b%2==0) || (b%2!=0 && a%2==0))
        cout << "TRUE";
    else
        cout << "FALSE";
}

