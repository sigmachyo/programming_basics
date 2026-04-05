#include <iostream>
#include <vector>
#include <array>
using namespace std;
/*
void print_array(vector <int> a, int len) {
	int i;
	for (i = 0; i < len; i++) {
		cout << a[i] << ' ';
	}


}
int main() {
	int n, len;
	cin >> n >> len;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	print_array(a, len);
}
int main() {
	int n, i, x, count = 0;
	cin >> n >> x;
	vector <int> l1(n);
	for (i = 0; i < n; i++) {
		cin >> l1[i];
	}
	for (i = 0; i < n; i ++)
		if (l1[i] == x) {
			count += 1;
		}
	cout << count;
}*/

int main() {
	int a, b, i, j;
	cin >> a >> b;
	vector <int> l1(a);
	vector <int> l2(b);
	for (i = 0; i < a; i++) {
		cin >> l1[i];
	}
	for (j = 0; j < b; j++) {
		cin >> l2[j];
	}
	cout << "{";
	for (i = 0; i < min(a, b); i++) {
		if (max(a, b) - i != 1) {
			cout << l1[i] << ',' << l2[i] << ',';
		}
		else {
			cout << l1[i] << ',' << l2[i];

		}
	}
	cout << '}';
}
