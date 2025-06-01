#include <iostream>
using namespace std;

class Base {
public:
    virtual void speak() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
public:
    void speak() override {
        cout << "Derived" << endl;
    }
};

void announce(Base b) {
    b.speak();
}

int main() {
    Derived d;
    announce(d);
}
