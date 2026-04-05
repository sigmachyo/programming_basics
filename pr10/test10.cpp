
#include <iostream>
#include <string>
#include <cstring>
#include <clocale>
using namespace std;
/*
char* slice(char* s, int to) {
	int j = -1;
	for (int i = 0; i < strlen(s) - 1; i++) {
		j += 1;
		if (i == to) j += 1;
		s[i] = s[j];
	}
	s[strlen(s) - 1] = '\0';
	return s;
}

void rstrip(char* s, const char* chars) {
	int i = strlen(s);
	int j = strlen(chars);
	int to;
	for (int k = 0; k < j; k++) {
		while (s[i] != ' ') {
			if (s[i] == chars[k]) {
				to = i;
				s = slice(s, to);
			}
			i--;
		}
		i = strlen(s);
	}
	cout << s;
}

int main() {
	setlocale(LC_ALL, "rus");
	char* s = new char[255];
	cout << "Введите строку 's'" << endl;
	cin.getline(s, 255);

	char* chars = new char[255];
	cout << "Введите строку 'chars'" << endl;
	cin.getline(chars, 255);

	rstrip(s, chars);
	return 0;


char* slice(char* s, int to) {
	int j = -1;
	for (int i = 0; i < strlen(s) - 1; i++) {
		j += 1;
		if (i == to) j += 1;
		s[i] = s[j];
	}
	s[strlen(s) - 1] = '\0';
	return s;
}
/jfklsdjfklllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll
void strip(char* s, const char* chars) {
	int i = strlen(s);
	int j = strlen(chars);
	int t = 0;
	int to;

	for (int k = 0; k < j; k++) {
		while (s[i] != ' ') {
			if (s[i] == chars[k]) {
				to = i;
				s = slice(s, to);
			}
			i--;
		}
		i = strlen(s);
	}

	for (int m = 0; m < j; m++) {
		while (s[t] != ' ') {
			if (s[t] == chars[m]) {
				to = t;
				s = slice(s, to);
				t = -1;
			}
			t++;
		}
		t = 0;
	}
	cout << s;
}

int main() {
	setlocale(LC_ALL, "rus");
	char* s = new char[255];
	cout << "Введите строку 's'" << endl;
	cin.getline(s, 255);

	char* chars = new char[255];
	cout << "Введите строку 'chars'" << endl;
	cin.getline(chars, 255);
	strip(s, chars);
	return 0;
}///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t join(char* s_out, size_t len, char** s_in, size_t n_in, char* sep) {
	int new_len = 0;
	for (size_t i = 0; i < n_in; i++) {
		for (size_t j = 0; j < strlen(s_in[i]); j++) {
			if (new_len < len) {
				s_out[new_len] = s_in[i][j];
				new_len++;
			}
		}
		for (size_t k = 0; k < strlen(sep); k++) {
			if (new_len < len && i != n_in - 1) {
				s_out[new_len] = sep[k];
				new_len++;
			}
		}
	}
	s_out[new_len] = '\0';
	cout << "Новая строка:" << endl << s_out << endl << endl;
	return new_len;
}
int main() {
	setlocale(LC_ALL, "rus");
	size_t n_in;
	cout << "Введите количество строк" << endl;
	cin >> n_in;
	char** s_in = new char * [n_in];
	for (size_t i = 0; i < n_in; i++) {
		s_in[i] = new char[255];
	}
	cin.get();

	cout << "Введите строки" << endl;
	for (size_t i = 0; i < n_in; i++) {
		cin.getline(s_in[i], 255);
	}

	char sep[255];
	cout << "Введите разделитель строки" << endl;
	cin.getline(sep, 255);

	size_t len;
	cout << "Введите длину итоговой строки" << endl;
	cin >> len;

	char* s_out = new char[len];
	size_t new_len = join(s_out, len, s_in, n_in, sep);
	cout << new_len;
}*/






