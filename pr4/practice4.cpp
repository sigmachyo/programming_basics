#include <iostream>
using namespace std;

int f1(double x) {
	return (20 * x / 3 * pow(x, 4) + 1 + 2.3 * pow(10, 5));
}	
int f2(double x) {
	return (x * pow(3 * x + 2, 1 / 3));
}

int main() {
	double x, r;
	cin >> x;
	r = f1(x) + f2(x);
	cout << r;

}