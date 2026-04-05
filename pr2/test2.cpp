#include <iostream>
using namespace std;

int main()
{
	//1 задание
	int A, B;
	cin >> A >> B;
	A = A + B;
	B = A - B;
	A = A - B;
	cout << A <<' ' << B;
	
	//2 задание
	double n_b, ost;
	int n_f_s, n_p, n_s;
	cin >> n_p >> n_s;
	ost = n_p % n_s;
	n_b = n_p / n_s + 1;
	n_f_s = n_s - ost;
	cout << n_b << " " << n_f_s;
	//3 задание
	double x;
	cin >> x;
	x = abs(x);
	x = int(x * 10);
	cout << x;
}

