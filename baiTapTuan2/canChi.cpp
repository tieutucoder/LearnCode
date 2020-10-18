#include <iostream>
int main()
{
    int Nam, tam1, tam2;
    std::cin >> Nam;
    if(Nam>0){
        tam1 = Nam % 12;
        tam2 = Nam % 10;
    }else {
        tam1 = (Nam%12)+13;
        tam2 = (Nam%10)+11;
    }
    //xai switch-case se tien hon
    if(tam2 == 0) {
        std::cout <<"CANH ";
    }
    if(tam2 == 1) {
        std::cout <<"TAN ";
    }
    if(tam2 == 2) {
        std::cout <<"NHAM ";
    }
    if(tam2 == 3) {
        std::cout <<"QUY ";
    }
    if(tam2 == 4) {
        std::cout <<"GIAP ";
    }
    if(tam2 == 5) {
        std::cout <<"AT ";
    }
    if(tam2 == 6) {
        std::cout <<"BINH ";
    }
    if(tam2 == 7) {
        std::cout <<"DINH ";
    }
    if(tam2 == 8) {
        std::cout <<"MAU ";
    }
    if(tam2 == 9) {
        std::cout <<"KY ";
    }
    //
    if(tam1 == 0) {
        std::cout <<"THAN";
    }
    if(tam1 == 1) {
        std::cout <<"DAU";
    }
    if(tam1 == 2) {
        std::cout <<"TUAT";
    }
    if(tam1 == 3) {
        std::cout <<"HOI";
    }
    if(tam1 == 4) {
        std::cout <<"TY'";
    }
    if(tam1 == 5) {
        std::cout <<"SUU";
    }
    if(tam1 == 6) {
        std::cout <<"DAN";
    }
    if(tam1 == 7) {
        std::cout <<"MEO";
    }
    if(tam1 == 8) {
        std::cout <<"THIN";
    }
    if(tam1 == 9) {
        std::cout <<"TY.";
    }
    if(tam1 == 10) {
        std::cout <<"NGO";
    }
    if(tam1 == 11) {
        std::cout <<"MUI";
    }
    return 0;
}
