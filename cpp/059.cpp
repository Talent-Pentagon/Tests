#include <iostream>
using namespace std;

class Data {
private:
    int* ptr;
public:
    Data(int val) {
        ptr = new int(val);
    }
    ~Data() {
        delete ptr;
    }
    int getValue() {
        return *ptr;
    }
    void reset() {
        delete ptr;
    }
};

int main() {
    int value;
    cout << "Enter a value: ";
    cin >> value;
    Data d(value);
    cout << "Value: " << d.getValue() << endl;
    d.reset();
    cout << "Value after reset: " << d.getValue() << endl; 
    return 0;
}