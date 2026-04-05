#include <iostream>
#include <vector>
#include <array>
#include <math.h>
using namespace std;
void sortarray(vector <double> arr, bool asc) {
	if (asc == false) {
		for (int i = 0; i < arr.size(); i++) {
			int imin = i;
			for (int j = i + 1; j < arr.size();j++) {
				if (arr[j] < arr[imin]) {
					imin = j;
				}

			}
			swap(arr[i], arr[imin]);
		}
	}

	else {
		for (int i = 0; i < arr.size(); i++) {
			int imax = i;
			for (int j = i + 1; j < arr.size();j++) {
				if (arr[j] > arr[imax]) {
					imax = j;
				}

			}
			swap(arr[i], arr[imax]);
		}
	}
}
void sort(vector <double> arr1, vector <double> arr2) {
	vector <double> arr3;
	bool asc;
	cin >> asc;
	vector <double> tg;
	for (int i = 0; i < arr1.size(); i++) {
		arr3.push_back(arr1[i]);
		arr3.push_back(arr2[i]);
	}
	for (int i = 0; i < arr3.size();i = i + 2) {;
		tg.push_back(pow(pow(arr3[i + 1], 2) / pow(arr3[i], 2), 0.5));
	}
	for (int i = 0; i < tg.size(); i++) {
		cout << tg[i] << " ";
	}
	cout << "\n";
	sortarray(tg, asc);
	if (asc == true) {
		cout << tg[tg.size()];
	}
	else {
		cout << tg[0];
	}


}
int main() {
	setlocale(0, "");
	int a, b;
	bool asc;
	cout << "Введите длину массива а состощего из точек x";
	cin >> a;
	cout << "Введитте длину массива b cocтояшего из точек у";
	cin >> b;
	vector <double> arr1(a);
	vector <double> arr2(b);
	cout << "Введите точки х";
	for (int i = 0; i < a; i++) {
		cin >> arr1[i];
	}
	cout << "Введите точки у";
	for (int i = 0; i < b; i++) {
		cin >> arr2[i];
	}
	cout << "Введите значение false если нужно по убыванию, true если по возрастанию";
	sort(arr1, arr2);

}

