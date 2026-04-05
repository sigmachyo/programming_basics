#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <iostream>
#include <string>
#include <QDataStream>

enum class MagazineType { children, popular_science, science, popular };

class Magazine {
private:
    std::string name;
    int price;
    int count;
    MagazineType type;

public:
    Magazine() : price(0), count(0), type(MagazineType::science) {}

    friend std::ostream& operator<<(std::ostream& ost, const Magazine& magazine);
    friend std::istream& operator>>(std::istream& ist, Magazine& magazine);
    friend QDataStream& operator<<(QDataStream& out, const Magazine& magazine);
    friend QDataStream& operator>>(QDataStream& in, Magazine& magazine);

    void save_bin(QDataStream& out) const;
    void load_bin(QDataStream& in);

    std::string getName() const { return name; }
    int getPrice() const { return price; }
    int getCount() const { return count; }
    std::string getTypeStr() const;
};

#endif // MAGAZINE_H
