#include <iostream>
using namespace std;

class Shape {
public:
    ~Shape() {
        cout << "Destroying Shape" << endl;
    }
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle;
    s->draw();
    delete s;
}
