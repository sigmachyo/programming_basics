/*
#include <iostream>
#include <vector>
#include <array>
#include <ctime>
#include <fstream>
#include <cstdio>

using namespace std;
int main() {
	ofstream fout("output.txt.");
	srand(time(0));
	int n, m;
	cin >> n >> m;
	vector <vector <int>> arr_big(n, vector <int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr_big[i][j] = rand() % 1000;


		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fout << arr_big[i][j] << ' ';
		}
		fout << "\n";

	}
}  
*/
#include <iostream>
#include <vector>
#include <array>
#include <ctime>
#include <fstream>
#include <cstdio>
using namespace std;
int main() {
	FILE* out;
	ofstream fout("output.txt.");
	srand(time(0));
	int n, m;
	cin >> n >> m;
	vector <vector <int>> arr_big(n, vector <int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr_big[i][j] = rand() % 1000;


		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fout << arr_big[i][j] << ' ';
		}
		fout << "\n";

	}
}

