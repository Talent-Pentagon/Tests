#include <iostream>
using namespace std;

class Person {
private:
    const int id;
    string name;
public:
    Person(int i, string n) : name(n) {

    }
    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int id;
    string name;
    cout << "Enter ID and name: ";
    cin >> id >> name;
    Person p(id, name);
    p.display();
    return 0;
}
