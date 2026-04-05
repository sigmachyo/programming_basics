#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) {
	return (2 * pow(x, 2) - 3 * x + 1);
}
int main() {
	double a, b, s;
	cin >> a >> b >> s;
	cout.width(10);
	cout.width(15);
	for (a; a <= b; a = a + s) {
		cout << fixed << a;

		cout << scientific << f(a) << endl;
	}
}

double f(double x) {
	return (5 * x + 2);
}
int main() {
	double a, b, s;
	cin >> a >> b >> s;
	for (a; a <= b; a = a + s) {
		cout << setw(15) << setprecision(3) << fixed << a << '   ';
	}	
	cout << endl;
	for (a; a <= b; a = a + s) {
		cout << setw(15) << setprecision(5) << scientific << f(a) << "  ";
	}
	
}
void print_diag(int s) {
	for (int i = 0; i < s; i++) {
		cout << ' ';
	}
}
double f(double x) {
	double pi;
	pi = acos(-1);
	return pow(sin(pi * x), 2);

}
int main() {
	double a, b, s, scale, x, y, u, v, i=0;
	cin >> a >> b >> s >> scale;
	for (u = a; u < b; u = u + s){
		i += 1;
		x = a + s * i;
		y = f(x);
		v = scale * y;
		print_diag(v);
		cout << '$' << '(' << x << ',' << y << ')' << endl;
	}
}