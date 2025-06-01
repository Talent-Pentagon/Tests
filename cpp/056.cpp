#include <iostream>
using namespace std;

class SelfCopy {
public:
    SelfCopy(const SelfCopy& other) {
        SelfCopy temp(other);
    }
};

int main() {
    SelfCopy s1(s1);
    cout << "Copied" << endl;
}
