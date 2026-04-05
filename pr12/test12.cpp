#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
using namespace std;
//31
 /*int** make2d(int nrows, int ncols, int val) {
	int** matrix = new int* [ncols];
	for (int i = 0; i < ncols; i++) {
		matrix[i] = new int[nrows];
		for (int j = 0; j < nrows; j++) {
			matrix[i][j] = val;
		}
	}
	return matrix;
}

int main() {
	int nrows, ncols, val;
	cin >> nrows >> ncols >>val;
	int** mas = make2d(nrows, ncols, val);
	for (int m = 0; m < ncols; m++) {
		for (int k = 0; k < nrows; k++) {
			cout << mas[m][k] << ' ';
		}
		cout << endl;
	}
//32
void fliplr(int** matrix, size_t nrows, size_t ncols) {
	int x = nrows;
	int y = ncols - 1;

	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < (ncols / 2); j++) {
			swap(matrix[i][j], matrix[i][y]);
			y--;

		}
		y = ncols - 1;

	}
}
int main() {
	int str, stl;
	cin >> str >> stl;
	int** matrix = new int* [str];
	for (int i = 0; i < str; i++) {
		matrix[i] = new int[stl];
		for (int j = 0; j < stl; j++) {
			cin >> matrix[i][j];
		}
	}
	fliplr(matrix, str, stl);
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stl; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}
}
*/
//33
void transpose(int** arr, size_t nrows, size_t ncols) {
	int x = 0;
	for (int i = 0; i < ncols; i++) {
		for (int j = nrows - 1; j >= x; j--) {
			if (not(i == j)) {
				swap(arr[i][j], arr[j][i]);
			}
		}
		x++;
	}

}
int main() {
	int str, stl;
	cin >> str >> stl;
	int** matrix = new int* [str];
	for (int i = 0; i < str; i++) {
		matrix[i] = new int[stl];
		for (int j = 0; j < stl; j++) {
			cin >> matrix[i][j];
		}
	}
	transpose(matrix, str, stl);
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stl; j++) {
			cout << matrix[i][j] << ' ';
		}
		cout << '\n';
	}
}





