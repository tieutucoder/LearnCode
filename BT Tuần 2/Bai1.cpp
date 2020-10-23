#include <iostream>
using namespace std;
long long sum(long long a)
{
    long long sum=(a*(a+1))/2;
    return sum;
}
int main()
{   long long n,s1=0,s=0;
    int a[500000];
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
        s1=s1+a[i];
    }
       s=sum(n);
        cout<<s-s1;
    return 0;
}

