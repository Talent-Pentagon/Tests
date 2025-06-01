#include <iostream>
using namespace std;

class Box {
private:
    int width = 10;
};

int main() {
    Box b;
    cout << b.width << endl; 
    return 0;
}
