#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	double ac, at, acm, p, aux, a, b, c;
	while(cin >> a >> b >> c){
		p = (b + a + c) / 2.0;
		at = sqrt(p*(p - a)*(p - b)*(p - c));
		aux = (p-a)*(p-b)*(p-c);
		p = sqrt(p * aux) / p;
		acm = M_PI*(p * p);
		p = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
		ac = M_PI*(p * p);
		ac = ac - at;
		at = at - acm;
		cout << fixed << setprecision(4);
		cout << ac << " " << at << " " << acm << endl;
	}
}
