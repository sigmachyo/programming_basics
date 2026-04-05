#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

enum MagazineType { children, popular_science, science, popular };

struct magazine {
    char name[100];
    int price;
    int count;
    MagazineType type;
};

void print_data(const magazine* data, size_t len, ostream& ost) {
    ost << setw(20) << "Name" << setw(20) << "Price" << setw(20) << "Count" << setw(20) << "Type" << endl;
    for (size_t i = 0; i < len; i++) {
        const char* type_str;
        switch (data[i].type) {
        case children:
            type_str = "Children";
            break;
        case popular_science:
            type_str = "Popular Science";
            break;
        case science:
            type_str = "Science";
            break;
        case popular:
            type_str = "Popular";
            break;
        default:
            type_str = "Not defined";
            break;
        }
        ost << setw(20) << data[i].name << setw(20) << data[i].price << setw(20) << data[i].count << setw(20) << type_str << endl;
    }
}

magazine* load_txt(istream& ist, size_t& len) {
    len = 0;
    string line;
    while (getline(ist, line)) {
        len++;
    }
    ist.clear();
    ist.seekg(0, ist.beg);
    magazine* data = new magazine[len];
    for (size_t i = 0; i < len; ++i) {
        getline(ist, line);
        istringstream iss(line);
        iss >> data[i].name >> data[i].price >> data[i].count;
        string type_str;
        iss >> type_str;
        transform(type_str.begin(), type_str.end(), type_str.begin(), ::tolower); 
        if (type_str == "children")
            data[i].type = children;
        else if (type_str == "popular_science")
            data[i].type = popular_science;
        else if (type_str == "science")
            data[i].type = science;
        else if (type_str == "popular")
            data[i].type = popular;
        else
            data[i].type = science;
    }
    return data;
}


void save_bin(const magazine* data, size_t len, ostream& ost) {
    ost.write(reinterpret_cast<const char*>(&len), sizeof(len));
    ost.write(reinterpret_cast<const char*>(data), len * sizeof(magazine));
}

magazine* load_bin(istream& ist, size_t& len) {
    ist.read(reinterpret_cast<char*>(&len), sizeof(len));
    magazine* data = new magazine[len];
    ist.read(reinterpret_cast<char*>(data), len * sizeof(magazine));
    return data;
}

int main() {
    int mode;
    setlocale(LC_ALL, "RUS");
    cout << "Выберите мод(1 для текста, 2 для бинарного): ";
    cin >> mode;
    if (mode == 1) {
        ifstream file("data.txt");
        if (!file) {
            cerr << "Ошибка открытия файла текста" << endl;
            return 1;
        }
        size_t len;
        magazine* data = load_txt(file, len);
        file.close();

        magazine* original_data = new magazine[len];
        copy(data, data + len, original_data);

        

        print_data(data, len, cout);

        sort(data, data + len, [](const magazine& a, const magazine& b) {
            return strcmp(a.name, b.name) < 0;
            });

        ofstream bin_file("data.bin", ios::binary);
        if (!bin_file) {
            cerr << "Ошибка открытия файла бинарного" << endl;
            return 1;
        }
        save_bin(data, len, bin_file);
        bin_file.close();
        cout << "Данные успешно сохранены в бинарный файл." << endl;

        delete[] data;
        delete[] original_data;
    }
    else if (mode == 2) {
        ifstream file("data.bin", ios::binary);
        if (!file) {
            cerr << "Ошибка открытия файла бинарного" << endl;
            return 1;
        }
        size_t len;
        magazine* data = load_bin(file, len);
        file.close();
        print_data(data, len, cout);
        delete[] data;
        cout << "Данные успешно загружены из бинарного файла." << endl;
    }
    else {
        cerr << "Вы не выбрали режим" << endl;
        return 1;
    }

    return 0;
}



        






