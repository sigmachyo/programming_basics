#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x, d, s, sn = 0;
	int count = 0;
	cin >> x >> d;
	s = log(x + 1);
	while (d < abs(s - sn)) {
		count += 1;
		if (count % 2 != 0) {
			sn = sn + (pow(x, count) / count);
		}
		else {
			sn = sn - (pow(x, count) / count);

		}
	}
	cout << s << " " << sn << " " << abs(s - sn);
}
