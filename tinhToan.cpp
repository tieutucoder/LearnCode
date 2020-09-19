#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    cout << x+y <<endl;
    cout << x-y <<endl;;
    cout << x*y <<endl;;
    (y==0) ? ((x==0) ? (cout <<"Null"):((x<0)?(cout<<"negative infinity"):(cout<<"positive infinity"))):(cout << x/y);
    //(x==0) ? (cout <<"Null"):((x<0)?(cout<<"negative infinity"):(cout<<"positive infinity"))
    //(x<0)?(cout<<"negative infinity"):(cout<<"positive infinity")
    return 0;
}

