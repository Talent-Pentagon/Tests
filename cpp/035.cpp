#include <iostream>
using namespace std;

class Sample {
    int value = 10;
public:
    void print() const {
        value = 5;
    }
};

int main() {
    Sample s;
    s.print();
}
