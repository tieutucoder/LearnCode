#include <iostream>
int main()
{
    int Year, temp;
    std::cin >> Year;
    if(Year>0){
        temp = Year % 12;
    }else {
        temp = (Year%12)+13;
    }
    //xai switch-case se tien hon
    if(temp == 0) {
        std::cout <<"THAN";
    }
    if(temp == 1) {
        std::cout <<"DAU";
    }
    if(temp == 2) {
        std::cout <<"TUAT";
    }
    if(temp == 3) {
        std::cout <<"HOI";
    }
    if(temp == 4) {
        std::cout <<"TY'";
    }
    if(temp == 5) {
        std::cout <<"SUU";
    }
    if(temp == 6) {
        std::cout <<"DAN";
    }
    if(temp == 7) {
        std::cout <<"MEO";
    }
    if(temp == 8) {
        std::cout <<"THIN";
    }
    if(temp == 9) {
        std::cout <<"TY.";
    }
    if(temp == 10) {
        std::cout <<"NGO";
    }
    if(temp == 11) {
        std::cout <<"MUI";
    }
    return 0;
}
