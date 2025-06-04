#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    float avg = (num1 + num2 + num3) / 3;

    cout << "The average is " << avg << ".";

    return 0;
}
