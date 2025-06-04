#include <iostream>
using namespace std;

int main() {
    float c;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    float f = (c * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit: " << f;

    return 0;
}