/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;

    std::cout << (int(a*n)/n) <<" ";

    if ((float(a*n)-int(a*n)) < 0.5) {
        if (((int(a*n)/float(n)-int(a*n)/n)*n)!=0) {
            std::cout << (int(a*n)/float(n)-int(a*n)/n)*n<<"/" <<n;
        } else {
            std::cout << n;
        }
    } else {
        std::cout << (int(a*n)/float(n)-int(a*n)/n)*n+1 << "/" <<n;
    }
    //std::cout << int((float((int(a*n)+1)/n)-int(a*n)/n)*6)<<"/" <<n;
    //std::cout << float(a*n);
    //a = int(a*n)/float(n);
    //std::cout << a;
    //std::cout << (int(a*n)/float(n)-int(a*n)/n)*n+1 << "/" <<n;
}
