#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	float a, b, c;
	cin >> a >> b >> c;
	float delta;
	delta = (b*b) - (4*a*c);
	if(delta > 0) {
		float no1, no2;
		no1 = ((-b)+sqrt(delta)) / (2*a);
		no2 = ((-b)-sqrt(delta)) / (2*a);
		(no1 == (-0))?(no1 = 0):(no1 = no1);
		(no2 == (-0))?(no2 = 0):(no2 = no2);
		(no1>no2)?(cout <<"{"<<no2<<", "<<no1<<"}"):(cout <<"{"<<no1<<", "<<no2<<"}");
	} else if(delta==0) {
		cout << "{"<<-b / (2*a)<<"}";
	} else {
		cout <<"Ø";
	}
	return 0;
}
