#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() { return 0; }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() { return side * side; }
};

int main() {
    double s;
    cout << "Enter side length: ";
    cin >> s;
    Square sq(s);
    cout << "Area: " << sq.area() << endl;
    return 0;
}