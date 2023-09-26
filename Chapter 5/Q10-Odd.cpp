// Write a C++ program to create a method that takes an integer as a parameter and throws an
// exception in another function if the number is odd

#include <iostream>

using namespace std;

void check(int N) {
    if (N % 2 != 0) {
        throw N;
    }
}

int main() {
    int N;
    cout << "Enter the number: ";
    cin >> N;
    try {
        check(N);
        cout << "Number is even" << endl;
    } catch (int N) {
        cout << "Number is odd" << endl;
    }
}
