#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void show() {
        cout << this->x << endl;
    }
};

int main() {
    Demo d;
    d.show();
}
