#include <iostream>
#include <cmath>

using namespace std;

double F(double x) {
    return  x / (2*sin(x)+1) - tan(log(x*x+1)); 
}

double hordeFun(double a, double b, double e) {	
	while (fabs(b - a) > e) {
		 a = b - (b - a) * F(b) / (F(b) - F(a));
         b = a - (a - b) * F(a) / (F(a) - F(b));
	}
	return b;
}
 
int main() {
	double e, a, b;
	cout << "enter eps (accuracy) - ";
	cin >> e;
	cout << "enter a (first point) - ";
	cin >> a;
	cout << "enter b (second point) - ";
	cin >> b;
	
	cout << "Horde Function - " << hordeFun(a, b, e) << endl;
	
	return 0;
}
