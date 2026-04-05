#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
using namespace std;
/*
void join(const char* sep, istream& ist, ostream& ost) {
	string s;
	int k = 0;
	while (ist >> s) {
		if (k == 0) {
			ost << s;
			k += 1;
		}
		else
		{
			ost << sep << " " << s;
		}
	}
}
int main()
{
	char sep[100];
	ifstream in("in.txt");
	ofstream out("out.txt");
	cin >> sep;
	join(sep, in, out);
	out.close();
	return 0;
}
//    38        /////////////////////////////////////////////////////////////////////////
void rev_lines(istream& ist, ostream& ost) {
	string s;
	vector <string> arr;
	while (getline(ist, s)) {
		arr.push_back(s);
	}
	for (int i = arr.size() - 1; i >= 0; i--) {
		ost << arr[i] << endl;
	}
}
int main()
{
	ifstream in("input.txt");
	ofstream out("output.txt");
	rev_lines(in, out);
	in.close();
	out.close();
	return 0;
}*/
//39 ////////////////////////////////////////////////////////////////////////
void wrap_text(std::istream& ist, std::ostream& ost, int max_line_len) {
	string result;
	for (char s; ist.get(s);) {
		if (s != '\n')
		{
			result += s;
		}
		else { result += " "; }
		if (result.length() == max_line_len) {
			ost << result << endl;
			result = "";
		}
	}
	ost << result;
}
int main()
{
	int max_line_len;
	ifstream in("input.txt");
	ofstream out("output.txt");
	cin >> max_line_len;
	wrap_text(in, out, max_line_len);
	in.close();
	out.close();
	return 0;
}
