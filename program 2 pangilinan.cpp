#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "The result of the operation is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The result of the operation is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The result of the operation is: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "The result of the operation is: " << num1 / num2 << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}