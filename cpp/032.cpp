#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
public:
    Temperature(double c) : celsius(c) {}
    double toFahrenheit() {
        double fahrenheit = (celsius * 9.0/5.0) + 32;
    }
};

int main() {
    double temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;
    Temperature t(temp);
    cout << "Fahrenheit: " << t.toFahrenheit() << endl;
    return 0;
}