#include <iostream>
using namespace std;

template<class T>
class Container {
private:
    T data;
public:
    Container(T d) : data(d) {}
    T getData() { return data; }
};

template<class T>
void display(Container<T> c) {
    cout << "Data: " << c.getData() << endl;
}

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    Container<int> c(value);
    display<>(c);
    return 0;
}