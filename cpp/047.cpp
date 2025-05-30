#include <iostream>
using namespace std;

class Counter {
private:
    static int count;
public:
    Counter() { count++; }
    int getCount() { return count; }
};

int Counter::count = 0;

int main() {
    int n;
    cout << "Enter number of objects to create: ";
    cin >> n;
    Counter* counters = new Counter[n];
    cout << "Count: " << counters[0].count << endl; 
    delete[] counters;
    return 0;
}