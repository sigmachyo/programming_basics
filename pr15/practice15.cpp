#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int find_rise_line(vector<int> arr, int k) {
    int max_line = 0, count = 1;
    for (int i = 1; i < k; i++) {
        if (arr[i] <= arr[i - 1]) {
            count += 1;
        }
        else {
            if (count > max_line) {
                max_line = count;
                count = 1;

            }
        }
    }
    return max_line;
}
void text2bin(istream& ist, ostream& ost) {
    int N, M;
    ist >> N >> M;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int num;
            ist >> num;
            ost.write(reinterpret_cast<const char*>(&num), sizeof(int));
        }
    }
}
void my_task(istream& ist) {
    int k;
    cin >> k;

    ifstream input_file("input.txt");
    if (!input_file) {
        cerr << "Error opening input file" << endl;
        return;
    }

    ofstream output_file("output.txt");
    if (!output_file) {
        cerr << "Error opening output file" << endl;
        input_file.close();
        return;
    }

    text2bin(input_file, output_file);

    input_file.close();
    output_file.close();

    ifstream converted_file("output.txt", ios::binary);
    vector<int> matrix(k);
    for (int i = 0; i < k; ++i) {
        converted_file.read(reinterpret_cast<char*>(&matrix[i]), sizeof(int));
    }

    cout << find_rise_line(matrix, k);

    converted_file.close();
    remove("output.txt");
}

int main() {
    my_task(cin);
    return 0;
}