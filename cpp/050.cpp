#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}
    friend void display(Point p); 
};

display(Point p) { 
    cout << "Point: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    int x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;
    Point p(x, y);
    display(p);
    return 0;
}