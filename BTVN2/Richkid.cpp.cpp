#include <iostream>

using namespace std;

int main(){
    bool flag=true;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a<5000000 || b<5000000 || c<5000000 || d<5000000 || (a+b+c+d)<100000000 || abs(a-b)>20000000 || abs(a-c)>20000000 || abs(a-d)>20000000 || abs(b-c)>20000000 || abs(b-d)>20000000 || abs(c-d)>20000000)
        flag=false;
    if(flag==true)
        cout << "TRUE";
    else
        cout << "FALSE";
    return 0;
}
