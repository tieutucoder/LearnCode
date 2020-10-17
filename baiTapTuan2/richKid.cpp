/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
for
while
[
]
###End banned keyword*/
#include <iostream>

using namespace std;

int main()
{
	int min, dist, temp;
	min = 5000000;
	dist = 20000000;
	bool Rich = true;
	int a, b, c, d;
	cin >> a >> b >> c >>d;
	Rich = ((a>min)&&(b>min)&&(c>min)&&(d>min))&&
	((a+b+c+d) > 100000000)&&
	(((a-b)>dist)||((a-b)>(-dist)))&&(((a-c)>dist)||((a-c)>(-dist)))&&(((a-d)>dist)||((a-d)>(-dist)))&&(((b-d)>dist)||((b-d)>(-dist)))&&(((b-c)>dist)||((b-c)>(-dist)))&&(((b-c)>dist)||((b-c)>(-dist)));
	//((a-b)>dist)||((a-b)>(-dist))
	//((a-c)>dist)||((a-c)>(-dist))
	//((a-d)>dist)||((a-d)>(-dist))
	//((b-d)>dist)||((b-d)>(-dist))
	//((b-c)>dist)||((b-c)>(-dist))
	//((d-c)>dist)||((d-c)>(-dist))
	//(a>min)&&(b>min)&&(c>min)&&(d>min)
	(Rich == true)?(cout << "TRUE"):(cout << "FALSE");
	return 0;
}


