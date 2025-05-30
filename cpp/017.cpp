#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    string getName() { return name; }
};

int main() {
    string name;
    int age;
    cout << "Enter name and age: ";
    cin >> name >> age;
    const Student s(name, age);
    cout << "Name: " << s.getName() << endl;
    return 0;
}