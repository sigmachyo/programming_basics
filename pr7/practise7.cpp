#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
	return exp(pow(x, 2)) - 2 + x * 2;
}
int main(){
	double i, a, b, h, x, y, minim = pow(2,31), c = 0, d = 0, r;
	cin >> a >> b >> h >> x >> y;
	for (i = a; i < b; i = h + i) {
		r = pow(pow((x - i), 2) + pow(y - f(i), 2), 0.5);
		if (r < minim) {
			minim = r;
			c = i;
			d = f(i);

		}

	}
	cout << c << '	' << d;
	

}