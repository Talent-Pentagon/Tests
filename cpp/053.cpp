#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A" << endl; }
};

class B {
public:
    void show() { cout << "Class B" << endl; }
};

class C : public A, public B {
public:
    void display() {
        show(); 
    }
};

int main() {
    int choice;
    cout << "Enter any number to test: ";
    cin >> choice;
    C obj;
    obj.display();
    return 0;
}