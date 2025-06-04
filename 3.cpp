#include <iostream>
using namespace std;

int main() {
    float radius;
    const float pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = pi * radius * radius;

    cout << "The area is " << area << ".";

    return 0;
}