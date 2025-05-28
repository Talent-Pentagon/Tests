#include <iostream>
class Car {
    std::string model;
public:
    Car(std::string m) {
        model = m;
    }
    void show() {
        std::cout << "Model: " << model << std::endl;
    }
};

int main() {
    Car c;
    c.show();
}
