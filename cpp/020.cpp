#include <iostream>
using namespace std;

class Animal {
public:
    Animal() { cout << "Animal created" << endl; }
    ~Animal() { cout << "Animal destroyed" << endl; } 
    virtual void speak() = 0;
};

class Dog : public Animal {
public:
    Dog() { cout << "Dog created" << endl; }
    ~Dog() { cout << "Dog destroyed" << endl; }
    void speak() override { cout << "Woof!" << endl; }
};

int main() {
    int choice;
    cout << "Enter 1 to create a dog: ";
    cin >> choice;
    if(choice == 1) {
        Animal* animal = new Dog();
        animal->speak();
        delete animal;
    }
    return 0;
}