#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0) {
        cout << "It is a non-positive number." << endl;
    } else if (number > 9999) {
        cout << "Please enter a number with no more than four digits." << endl;
    } else {
        cout << "It is a positive number." << endl;

        if (number < 10) {
            cout << "It has 1 digit." << endl;
        } else if (number < 100) {
            cout << "It has 2 digits." << endl;
        } else if (number < 1000) {
            cout << "It has 3 digits." << endl;
        } else {
            cout << "It has 4 digits." << endl;
        }
    }

    return 0;
}