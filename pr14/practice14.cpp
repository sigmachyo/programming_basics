#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string add(ostream& ost, istream& ist) {
    string a;
    getline(ist, a);
    for (size_t i = 0; i < a.length(); i++) {
        if (a.substr(i, 2) == "Mr" && (i + 2 == a.length() || a[i + 2] != '.')) {
            a.insert(i + 2, 1, '.');
        }
        else if (a.substr(i, 2) == "Ms" && (i + 2 == a.length() || a[i + 2] != '.')) {
            a.insert(i + 2, 1, '.');
        }
        else if (a.substr(i, 3) == "Mrs" && (i + 3 == a.length() || a[i + 3] != '.')) {
            a.insert(i + 3, 1, '.');
        }
        else if (a.substr(i, 2) == "Dr" && (i + 2 == a.length() || a[i + 2] != '.')) {
           a.insert(i + 2, 1, '.');
        }
    }
    return a;
}
int main() {
    ofstream ost;
    ost.open("out.txt");

    ifstream ist;
    ist.open("in.txt");
    ost << add(ost, ist);
    cout << "The end";

}
