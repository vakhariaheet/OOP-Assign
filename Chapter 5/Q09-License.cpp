#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Enter the age: ";
    cin >> age;
    try {
        if (age < 18) {
            throw age;
        }
        cout << "Eligible for license" << endl;
    } catch (int age) {
        cout << "Not eligible for license" << endl;
    }
}