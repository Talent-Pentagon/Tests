#include <iostream>
using namespace std;

class A {
private:
    int value = 42;
public:
    friend void show(A& a);
};


int main() {
    A obj;
    show(obj);
    return 0;
}