#include <iostream>
using namespace std;

class Calculator {
public:
    int& add(int a, int b) {
        int result = a + b;
        return result;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Calculator calc;
    cout << "Sum: " << calc.add(x, y) << endl;
    return 0;
}