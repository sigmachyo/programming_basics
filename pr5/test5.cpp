#include <iostream>
using namespace std;
/*
int main() {
	// 10 задание
	 int x, n;
	cin >> x;
	n = x;
	while (x >= n) {
		cout << x;
		n =x;
		cin >> x;
	}
	return 0;
}
	// 11 задание
void print_diag(int s) {
	for (int i = 0; i < s; i++) {
		cout << ' ';
	}
}
int main() {
	int s;
	cin >> s;
	for (int i = 0; i < s; i++) {
		print_diag(i);
		cout << '*' << endl;
	}

}*/
void print_rect(int x, int y, int sx, int sy) {
	for (int i = 0; i < y; i++)cout << endl;
	for (int i = 0; i < sy; i++) {
		for (int j = 0; j < x; j++)cout << ' ';
		for (int j = 0; j < sx; j++){
			cout << '@';
		}
		cout << endl;

	}
}
int main() {
	int x, y, sx, sy;
	cin >> x >> y >> sx >> sy;
	print_rect(x, y, sx, sy);
	}
	