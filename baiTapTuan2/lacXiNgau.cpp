#include <iostream>
int main()
{
    int a1, a2, a3, a4, b1, b2, b3, b4;
    std::cin >> a1 >> a2 >> a3 >> a4;
    std::cin >> b1 >> b2 >> b3 >> b4;
    int Nam, Nga;
    Nam = a1 + a2 + a3 + a4;
    Nga = b1 + b2 + b3 + b4;
    if(Nam > Nga){
        std::cout <<"Nam";
    }else if(Nam < Nga){
        std::cout <<"Nga";
    }else{
        std::cout <<"Tie";
    }
    return 0;
}
