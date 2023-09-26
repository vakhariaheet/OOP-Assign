// Write a program to take array values from user and illustrate array index out of bound
// exception.

#include <iostream>

using namespace std;

int main(){
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;
    try {
        if (N <= 0) {
            throw N;
        }
    } catch (int N) {
        cout << "Invalid number of elements" << endl;
        return 0;
    }
    int arr[N];
    cout << "Enter " << N << " integer values: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int index;
    cout << "Enter the index: ";
    cin >> index;

    try {
        if (index < 0 || index >= N) {
            throw index;
        }
    } catch (int index) {
        cout << "Array index out of bound exception" << endl;
        return 0;
    }
}