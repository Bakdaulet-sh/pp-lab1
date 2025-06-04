#include <iostream>
using namespace std;

int main() {
    int Years;

    cout << "Enter your age in years: ";
    cin >> Years;

    int Months = Years * 12;

    cout << "You are " << Months << " months old.";

    return 0;
}