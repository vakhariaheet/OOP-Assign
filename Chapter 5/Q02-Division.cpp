#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw b;
        }
    } catch (int b) {
        cout << "Division by zero exception" << endl;
        return 0;
    }
    cout << "Division: " << a / b << endl;
}