#include <iostream>
using namespace std;

int main() {
    float pi, rate, time;

    cout << "Enter principal amount: ";
    cin >> pi;

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time in years: ";
    cin >> time;

    float si = (pi * rate * time) / 100;

    cout << "Simple Interest is " << si << ".";

    return 0;
}