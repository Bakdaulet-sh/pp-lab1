#include <iostream>
using namespace std;

int main() {
    float weight, height;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (m): ";
    cin >> height;

    float bmi = weight / (height * height);

    cout << "Your BMI is " << bmi;

    return 0;
}