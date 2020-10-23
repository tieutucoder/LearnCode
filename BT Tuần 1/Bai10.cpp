#include <iostream>

using namespace std;

int main()
{
    int a,k;
    cin>>a>>k;
cout<<(a&((~0)^1<<k-1));
    return 0;
}
