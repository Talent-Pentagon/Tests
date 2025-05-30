#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    Number operator+(const Number& other) {
        return *this + other;
    }
    int getValue() const { return value; }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Number n1(a), n2(b);
    Number result = n1 + n2;
    cout << "Result: " << result.getValue() << endl;
    return 0;
}