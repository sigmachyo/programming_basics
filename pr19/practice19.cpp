#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            if (mid == 0 || arr[mid - 1] != target)
                return mid;
            else
                return binarySearch(arr, left, mid - 1, target);
        }

        if (arr[mid] < target)
            return binarySearch(arr, mid + 1, right, target);

        return binarySearch(arr, left, mid - 1, target);
    }

    return -1;
}

int main() {
    setlocale(LC_ALL, "ru");
    int n, target;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    cout << "Введите искомый элемент";
    cin >> target;


    int index = binarySearch(arr, 0, arr.size() - 1, target);
    if (index != -1)
        cout << "Искомый элемент " << target << " найден в позиции " << index + 1 << endl;
    else
        cout << "Искомый элемент " << target << " не найден" << endl;

    return 0;
}
