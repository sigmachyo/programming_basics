#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

enum class MagazineType { children, popular_science, science, popular };

class Magazine {
private:
    string name;
    int price;
    int count;
    MagazineType type;

public:
    Magazine() : price(0), count(0), type(MagazineType::science) {}

    friend ostream& operator<<(ostream& ost, const Magazine& magazine) {
        string type_str;
        switch (magazine.type) {
        case MagazineType::children:
            type_str = "Children";
            break;
        case MagazineType::popular_science:
            type_str = "Popular Science";
            break;
        case MagazineType::science:
            type_str = "Science";
            break;
        case MagazineType::popular:
            type_str = "Popular";
            break;
        default:
            type_str = "Not defined";
            break;
        }
        ost << setw(20) << magazine.name << setw(20) << magazine.price << setw(20) << magazine.count << setw(20) << type_str;
        return ost;
    }

    friend istream& operator>>(istream& ist, Magazine& magazine) {
        string type_str;
        ist >> magazine.name >> magazine.price >> magazine.count >> type_str;
        transform(type_str.begin(), type_str.end(), type_str.begin(), ::tolower);
        if (type_str == "children")
            magazine.type = MagazineType::children;
        else if (type_str == "popular_science")
            magazine.type = MagazineType::popular_science;
        else if (type_str == "science")
            magazine.type = MagazineType::science;
        else if (type_str == "popular")
            magazine.type = MagazineType::popular;
        else
            magazine.type = MagazineType::science;
        return ist;
    }

    void save_bin(ostream& ost) const {
        size_t name_length = name.length();
        ost.write(reinterpret_cast<const char*>(&name_length), sizeof(name_length));
        ost.write(name.c_str(), name_length);
        ost.write(reinterpret_cast<const char*>(&price), sizeof(price));
        ost.write(reinterpret_cast<const char*>(&count), sizeof(count));
        ost.write(reinterpret_cast<const char*>(&type), sizeof(type));
    }

    void load_bin(istream& ist) {
        size_t name_length;
        ist.read(reinterpret_cast<char*>(&name_length), sizeof(name_length));
        char* name_buffer = new char[name_length];
        ist.read(name_buffer, name_length);
        name = string(name_buffer, name_length);
        ist.read(reinterpret_cast<char*>(&price), sizeof(price));
        ist.read(reinterpret_cast<char*>(&count), sizeof(count));
        ist.read(reinterpret_cast<char*>(&type), sizeof(type));
    }

    string getName() const {
        return name;
    }
};

void print_data(const Magazine* data, size_t len, ostream& ost) {
    ost << setw(20) << "Name" << setw(20) << "Price" << setw(20) << "Count" << setw(20) << "Type" << endl;
    for (size_t i = 0; i < len; i++) {
        ost << data[i] << endl;
    }
}

Magazine* load_txt(istream& ist, size_t& len) {
    len = 0;
    string line;
    while (getline(ist, line)) {
        len++;
    }
    ist.clear();
    ist.seekg(0, ist.beg);
    Magazine* data = new Magazine[len];
    for (size_t i = 0; i < len; ++i) {
        ist >> data[i];
    }
    return data;
}

void save_bin(const Magazine* data, size_t len, ostream& ost) {
    ost.write(reinterpret_cast<const char*>(&len), sizeof(len));
    for (size_t i = 0; i < len; ++i) {
        data[i].save_bin(ost);
    }
}

Magazine* load_bin(istream& ist, size_t& len) {
    ist.read(reinterpret_cast<char*>(&len), sizeof(len));
    Magazine* data = new Magazine[len];
    for (size_t i = 0; i < len; ++i) {
        data[i].load_bin(ist);
    }
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
        Magazine* data = load_txt(file, len);
        file.close();

        print_data(data, len, cout);

        sort(data, data + len, [](const Magazine& a, const Magazine& b) {
            return a.getName() < b.getName();
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
    }
    else if (mode == 2) {
        ifstream file("data.bin", ios::binary);
        if (!file) {
            cerr << "Ошибка открытия файла бинарного" << endl;
            return 1;
        }
        size_t len;
        Magazine* data = load_bin(file, len);
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
