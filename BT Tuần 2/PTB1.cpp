#include <iostream>

int main () {
    double a, b;
    std::cin >> a >> b ;
    //ax+b=0
    if (a==0&&b==0){
        std::cout << \mathbb{R};

    } else if (a==0) {
        std::cout << "Ø";
    } else {
        std::cout <<"{"<<-b/a<<"}";
    }
}
