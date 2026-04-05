#include <iostream>
using namespace std;
int* read_array(int len) {

    int* arr = new int[len];
    for (int i = 0; i < len; i++) {
        cin >> *(arr + i);
    }
    return arr;
}

int* my_task(int* A, int lenA) {
    int minim_index = 0, minim = 1000;
    for (int i = 0; i < lenA; i++) {
        if (minim > *(A + i)) {
            minim = min(minim, *(A + i));
            minim_index = i;
        }
    }
    swap(*(A + 0), *(A + minim_index));
      return A;
    }

void print_array(int* arr, int len) {

        for (int m = 0; m < len; m++)
            cout << *(arr + m) << " ";

    }
int main() {

        int len;
        cin >> len;
        int* A = read_array(len);
        int* B = my_task(A, len);
        cout << endl;
        print_array(B, len);
    }
