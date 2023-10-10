#include <iostream>
/*
Write a C++ program to read 10 integers in an array. Find the Maximum and
Minimum number. If minimum number is less than 20 than throw an exception of
Minimum value should be greater or equal to 20.
*/
using namespace std;

void sort(int arr[], int size) {
  int temp;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
};

int main() {
  int N = 10;
  int arr[N];
  cout << "Enter 10 integers: ";
  for (int i = 0; i < N; i++) cin >> arr[i];
  sort(arr, N);
  int minimum = arr[0], maximum = arr[N - 1];
  try {
    if (minimum < 20) throw minimum;
    cout << "Maximum Number :" << maximum << endl;
    cout << "Minimum Number :" << minimum << endl;
  } catch (int error) {
    cout << "Error : Minimum Number Should be Atleast 20" << endl;
  }
}
