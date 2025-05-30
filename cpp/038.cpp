#include <iostream>
using namespace std;

class Array {
private:
    int arr[5];
    int size;
public:
    Array() : size(5) {
        for(int i = 0; i < 5; i++) arr[i] = 0;
    }
    void setValue(int index, int value) {
        arr[index] = value;
    }
    void display() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array a;
    int index, value;
    cout << "Enter index (0-4) and value: ";
    cin >> index >> value;
    a.setValue(index, value);
    a.display();
    return 0;
}