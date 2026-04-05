#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Node {
    int data;
    Node* prev; 
    Node* next; 

    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

struct List {
    Node* first;
    Node* last;

    
    List() : first(nullptr), last(nullptr) {}
};

void insert_node(List& list, Node* next, Node* n) {
    if (next == nullptr) {
        if (list.last == nullptr) {
            list.first = n;
            list.last = n;
        }
        else {
            list.last->next = n;
            n->prev = list.last;
            list.last = n;
        }
    }
    else {
        n->prev = next->prev;
        n->next = next;
        if (next->prev == nullptr) {
            list.first = n;
        }
        else {
            next->prev->next = n;
        }
        next->prev = n;
    }
}

void remove_node(List& list, Node* node) {
    if (node == nullptr) {
        return;
    }

    if (node->prev != nullptr) {
        node->prev->next = node->next;
    }
    else {
        list.first = node->next;
    }

    if (node->next != nullptr) {
        node->next->prev = node->prev;
    }
    else {
        list.last = node->prev;
    }

    delete node;
}
void print_list(const List& list, ostream& ost) {
    Node* current = list.first;
    while (current != nullptr) {
        ost << current->data << " ";
        current = current->next;
    }
    ost << endl;
}


void print_list_rev(const List& list, ostream& ost) {
    Node* current = list.last;
    while (current != nullptr) {
        ost << current->data << " ";
        current = current->prev;
    }
    ost << endl;
}

bool checkNumber(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 2 == 0;
}

Node* findNumber(const List& list) {
    Node* current = list.first;
    while (current != nullptr) {
        if (checkNumber(current->data)) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int generateRandomNumber(int max) {
    return rand() % (max + 1);
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(nullptr));

    List list;

    ifstream input("data.txt");
    if (!input) {
        cerr << "Не удалось открыть файл" << endl;
        return 1;
    }

    int num;
    while (input >> num) {
        Node* newNode = new Node(num);
        insert_node(list, nullptr, newNode);
    }
    input.close();

    cout << "Исходный список: ";
    print_list(list, cout);
    cout << "Исходный список в обратном порядке: ";
    print_list_rev(list, cout);

    Node* current = findNumber(list);
    Node* prev = nullptr;
    while (current != nullptr) {
        if (checkNumber(current->data)) { 
            cout << "Найден узел с числом, сумма цифр которого четная: " << current->data << endl;

            int sumOfDigits = 0;
            int tempNum = current->data;
            while (tempNum != 0) {
                sumOfDigits += tempNum % 10;
                tempNum /= 10;
            }

            for (int i = 0; i < 3; ++i) {
                int randomNum = generateRandomNumber(sumOfDigits);
                Node* newNode = new Node(randomNum);
                insert_node(list, current, newNode);
            }

            prev = current;
            current = current->next; 
        }
        else {
            prev = current; 
            current = current->next; 
        }
    }

    cout << "Измененный список: ";
    print_list(list, cout);
    cout << "Измененный список в обратном порядке: ";
    print_list_rev(list, cout);

    int index;
    cout << "Введите номера удаляемых узлов (для завершения введите -1): ";
    while (true) {
        cin >> index;
        if (index == -1) {
            break;
        }
        current = list.first;
        int count = 1;
        while (current != nullptr && count < index) {
            current = current->next;
            count++;
        }

        if (current == nullptr) {
            cout << "Узел с указанным номером не найден." << endl;
        }
        else {
            remove_node(list, current);
            cout << "Узел с номером " << index << " удален из списка." << endl;
        }
    }

    cout << "Итоговый список после удаления: ";
    print_list(list, cout);
    cout << "Итоговый список в обратном порядке после удаления: ";
    print_list_rev(list, cout);

    return 0;
}
