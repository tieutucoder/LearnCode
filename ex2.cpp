#include <iostream>
using namespace std;

int main ()
{
  int canh;
  cin >> canh;
  cout << "\n";
  for (int i=0; i<5; i++) {
    for (int j=0; j<4; j++) {
      if (j==0 || j==3 || i==0 || i==4) {
        cout << canh;
      } else {
        cout << " ";
      };
    };
    cout << "\n\n";
  };
  return 0;
}