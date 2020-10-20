#include <iostream>

using namespace std;

int main()
{
   long a;
   cin >> a;
   if(a<0)
        a=13-(-a-(12*((int)(-a/12))));
   a=a-(12*((int)(a/12)));
       if(a==0)
        cout << "THAN";
       else if(a==1)
        cout << "DAU";
       else if(a==2)
        cout << "TUAT";
       else if(a==3)
        cout << "HOI";
       else if(a==4)
        cout << "TY'";
       else if(a==5)
        cout << "SUU";
       else if(a==6)
        cout << "DAN";
        else if(a==7)
        cout << "MEO";
         else if(a==8)
        cout << "THIN";
         else if(a==9)
        cout << "TY.";
         else if(a==10)
        cout << "NGO";
         else if(a==11)
        cout << "MUI";


}
