/**
 * Write a C++ program to sort a list of university names in ascending order using arrays. Take a n number of university names and throw an exception if index is not in range
in range
*/
#include <iostream>

using namespace std;

void sort(string arr[], int size) {
  string temp;
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
    int N = 3;
    cout << "Enter " << N << " Universities :";
    string uni[N];
    for (int i = 0; i < N; i++) {
    getline(cin, uni[i]);
    };
    sort(uni, N);
    cout << "----------------------Sorted Universities-----------------------"
         << endl;
    for (int i = 0; i < N;i++){
        cout << uni[i] << endl;
    }
    int i;
    cout << "Enter Index: ";
    cin >> i;
    try {
        if (i >= N) throw i;
        cout << uni[i]<<endl;
    }catch(int error) {
        cout << "Index Out Of Bound"<<endl;
    }
}