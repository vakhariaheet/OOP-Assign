
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
    int highest = arr[0], secondHighest = arr[0];
    for (int i = 0; i < N; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }
    cout << "Highest: " << highest << endl;
    cout << "Second Highest: " << secondHighest << endl;
 }