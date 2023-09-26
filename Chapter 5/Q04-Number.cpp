#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the number: ";
    cin >> N;
    try {
        if (N < 0 || N >= 100) {
            throw N;
        }
    } catch (int N) {
        cout << "Invalid number" << endl;
        return 0;
    }
    cout << "Number: " << N << endl;
}