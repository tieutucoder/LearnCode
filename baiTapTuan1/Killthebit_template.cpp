/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
;
,
###End banned keyword*/
#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	cout << (
        (n & (~(1<<(k-1))))
        )
    ;
    //tham khảo -- 
}
