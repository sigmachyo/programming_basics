
#include <iostream>
#include <math.h>
using namespace std;

/*
double sum(int n){
	double a, s;
	s = 0;
	for (double i = 1; i <= n; i++) {
		a = (i / (i + 1));
		s = s + a;
}
	return s;
}
int main() {
	double n;
	cin >> n;
	cout << sum(n);
}
double umnoj(double n, double x) {
	double p = 1, a;
	for (double i = 1; i <= n; i++)
	{
		a = 2 * pow(x, i);
		p = p * a;
	}
	return p;
}
int main() {
	double n, x;
	cin >> n >> x;
	cout << umnoj(n, x);
}*/
double hard_sum(int n) {
	double s = 0, a;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			a = i * 1;
			s = s + a;
		}
		else {
			a = i * -1;
			s = s + a;
		}
	}
	return s;
}
int main() {
	int n;
	cin >> n;
	cout << hard_sum(n);
}