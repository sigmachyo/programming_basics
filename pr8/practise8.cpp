#include <iostream>
#include <vector>
#include <array>
using namespace std;
int smallest(vector <int> arr) {
	int minim_index = 0, minim = 1000;
	for (int i = 0; i < arr.size(); i++) {
		minim = min(minim, arr[i]);
		minim_index = i;

	}
	return minim_index;
}
int main() {
	int n;
	cin >> n;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}
	swap(arr[0], arr[smallest(arr)]);
	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}

}