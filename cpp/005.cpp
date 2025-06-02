#include <iostream>
using namespace std;

class Car {
    string model;
public:
    Car(string m) {
        model = m;
    }
    void show() {
        cout << "Model: " << model << endl;
    }
};

int main(int argc, char* argv[]) {
    string input = argv[1];
    Car c(input);
    c.show();
    return 0;
}
