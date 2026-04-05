#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;

char max_element_count(string s) {
	vector <char> char_arr(s.length());
	for (int i = 0; i < s.length(); i++) {
		char_arr[i] = s[i];
	}
	char element = ' ', maxim = -1000, count = 0;
	for (int i = 0; i < char_arr.size();i++) {
		for (int j = 0; j < char_arr.size(); j++) {
			if (char_arr[i] == char_arr[j]) {
				count += 1;
			}
		}
		if (count > maxim) {
			maxim = count;
			element = char_arr[i];
			count = 0;
		}
	}
	return element;
}
int main() {
	setlocale(LC_ALL, "rus");
	string s;
	getline(cin, s);
	cout << max_element_count(s);
}
