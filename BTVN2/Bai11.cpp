#include <iostream>
using namespace std;
bool Check(int nam)
{
    if((nam%100!=0 && nam%4==0) || (nam%400==0))
        return true;
    return false;
}
int main()
{
    int ngay, thang, nam;
    bool flag=true;
    cin >> ngay >> thang >> nam;
    if(!((ngay>0 && ngay<=31) && (thang>0 && thang<=12) && nam!=0 ))
        flag=false;
    else if((thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12) && ngay<=31)
        flag=true;
    else if(thang==2){
        if(Check(nam)==true)
            (ngay<=29?flag=true:flag=false);
        else
            (ngay<=28?flag=true:flag=false);
    }
    else if((thang==4 || thang==6 || thang==9 || thang==11) && ngay > 30)
        flag=false;
    else
        flag=true;

    if(flag==true)
        cout << "TRUE";
    else
        cout << "FALSE";
}
