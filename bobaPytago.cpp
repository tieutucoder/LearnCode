/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
if
while 
switch
for
###End banned keyword*/
#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)?(cout<<1):(cout<<0);
	return 0;
}
