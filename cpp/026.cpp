#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
};

int main() {
    Counter c;
    cout << c.count << endl;
}
