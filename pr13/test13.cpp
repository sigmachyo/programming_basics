#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
#include <fstream>
using namespace std;
/*
 int** make2d(int nrows, int ncols, int val) {
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
	 ofstream out("out.txt");
	 int nrows, ncols, val;
	 cin >> nrows >> ncols >> val;
	 int** mas = make2d(nrows, ncols, val);
	 for (int m = 0; m < ncols; m++) {
		 for (int k = 0; k < nrows; k++) {
			 out << mas[m][k] << ' ';
		 }
		 out << endl;
	 }
 }
 

void fliplr(int** matrix, size_t nrows, size_t ncols, ofstream& ost) {
	int x = nrows;
	int y = ncols - 1;

	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < (ncols / 2); j++) {
			swap(matrix[i][j], matrix[i][y]);
			y--;

		}
		y = ncols - 1;

	}
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			ost << matrix[i][j] << ' ';
		}
		ost << '\n';
	}
	ost.close();
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
	ofstream ost("ost.txt");
	fliplr(matrix, str, stl, ost);

}
	

*/
void transpose(int** arr, size_t nrows, size_t ncols, std::ofstream& ost) {
	int x = 0;
	for (int i = 0; i < ncols; i++) {
		for (int j = nrows - 1; j >= x; j--) {
			if (not(i == j)) {
				swap(arr[i][j], arr[j][i]);
			}
		}
		x++;
	}
	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncols; j++) {
			ost << arr[i][j] << ' ';
		}
		ost << '\n';
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
	ofstream output("out.txt");
	transpose(matrix, str, stl, output);
	
	}





