// Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.

#include <iostream>

using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << "Enter the operator: ";
    cin >> op;
    try {
        if (b == 0) {
            throw b;
        }
        if(op != '+' && op != '-' && op != '*' && op != '/') {
            throw op;
        }
    } catch (int b) {
        cout << "Division by zero exception" << endl;
        return 0;
    }
    catch (char op) {
        cout << "Invalid operator" << endl;
        return 0;
    }
    switch (op) {
        case '+':
            cout << "Addition: " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction: " << a - b << endl;
            break;
        case '*':
            cout << "Multiplication: " << a * b << endl;
            break;
        case '/':
            cout << "Division: " << a / b << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }
}