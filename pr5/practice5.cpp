#include <iostream>
using namespace std;
int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return n;
}

int main() {
	int n, n2;
	cin >> n >> n2;
	for (int i = n; i <= n2; i++) {
		if (is_prime(i) > 0) {
			for (int j = n; j <= n2; j++) {
				if (is_prime(j) > 0){
					if (is_prime(i) - is_prime(j) == 2 || is_prime(i) - is_prime(j) == -2) {
						cout << is_prime(i) << " " << is_prime(j) << endl ;
					}
					}
				
				}
			}
		}
	}
