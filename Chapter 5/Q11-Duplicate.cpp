#include <iostream>

using namespace std;

int main() {
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

    try {
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arr[i] == arr[j]) {
                    throw arr[i];
                }
            }
        }
    } catch (int N) {
        cout << "Duplicate found: " << N << endl;
        return 0;
    }
    cout << "No duplicates found" << endl;
}