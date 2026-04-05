#include "magazine.h"
#include <iomanip>
#include <QString>

// Реализация перегрузки операторов вывода и ввода для `std::ostream` и `std::istream`
std::ostream& operator<<(std::ostream& ost, const Magazine& magazine) {
    std::string type_str;
    switch (magazine.type) {
    case MagazineType::children: type_str = "Children"; break;
    case MagazineType::popular_science: type_str = "Popular Science"; break;
    case MagazineType::science: type_str = "Science"; break;
    case MagazineType::popular: type_str = "Popular"; break;
    default: type_str = "Not defined"; break;
    }
    ost << std::setw(20) << magazine.name << std::setw(20) << magazine.price << std::setw(20) << magazine.count << std::setw(20) << type_str;
    return ost;
}

std::istream& operator>>(std::istream& ist, Magazine& magazine) {
    std::string type_str;
    ist >> magazine.name >> magazine.price >> magazine.count >> type_str;
    std::transform(type_str.begin(), type_str.end(), type_str.begin(), ::tolower);
    if (type_str == "children") magazine.type = MagazineType::children;
    else if (type_str == "popular_science") magazine.type = MagazineType::popular_science;
    else if (type_str == "science") magazine.type = MagazineType::science;
    else if (type_str == "popular") magazine.type = MagazineType::popular;
    else magazine.type = MagazineType::science;
    return ist;
}

// Реализация перегрузки операторов для `QDataStream`
QDataStream& operator<<(QDataStream& out, const Magazine& magazine) {
    QString qname = QString::fromStdString(magazine.name);
    out << qname << magazine.price << magazine.count << static_cast<int>(magazine.type);
    return out;
}

QDataStream& operator>>(QDataStream& in, Magazine& magazine) {
    QString qname;
    int typeInt;
    in >> qname >> magazine.price >> magazine.count >> typeInt;
    magazine.name = qname.toStdString();
    magazine.type = static_cast<MagazineType>(typeInt);
    return in;
}

void Magazine::save_bin(QDataStream& out) const {
    out << *this;
}

void Magazine::load_bin(QDataStream& in) {
    in >> *this;
}

std::string Magazine::getTypeStr() const {
    switch (type) {
    case MagazineType::children: return "Children";
    case MagazineType::popular_science: return "Popular Science";
    case MagazineType::science: return "Science";
    case MagazineType::popular: return "Popular";
    default: return "Not defined";
    }
}
