#include <iostream>

using namespace std;

int main()
{
   long a,b;
   cin >> a;
   b=a;
   if(b<0)
    b=11-(-b+((int)(b/10))*10);
   b=b-((int)(b/10))*10;
        if(b==9)
        cout << "KY ";
       else if(b==0)
        cout << "CANH ";
        else if(b==1)
        cout << "TAN ";
       else if(b==2)
        cout << "NHAM ";
       else if(b==3)
        cout << "QUY ";
       else if(b==4)
        cout << "GIAP ";
       else if(b==5)
        cout << "AT ";
       else if(b==6)
        cout << "BINH ";
        else if(b==7)
        cout << "DINH ";
         else if(b==8)
        cout << "MAU ";
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

return 0;
}
