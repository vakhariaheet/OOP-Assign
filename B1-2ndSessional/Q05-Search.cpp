/**
 * Write a C++ program to search a value from an array using function templates.
 * Pass Integer,Float & Character array as parameter to the template
 */
#include <iostream>

using namespace std;

template <class T>
int search(T arr[], T q, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == q) return i;
  }
  return -1;
};

int main() {
  int N;
  cout << "Enter Array size: ";
  cin >> N;
  int intArr[N];
  float floatArr[N];
  char chrArr[N];
  cout << "Enter " << N << " Floats:";
  for (int i = 0; i < N; i++) cin >> intArr[i];
  int intQ;
  cout << "Enter Float you want to find: ";
  cin >> intQ;
  try {
    int pos = search(intArr, intQ, N);
    if (pos == -1) throw -1;
    cout << "Element found at " << pos << endl;
  } catch (int error) {
    cout << "Element Not Found"<<endl;
  };

  cout << "Enter " << N << " intergers:";
  for (int i = 0; i < N; i++) cin >> floatArr[i];
  float floatQ;
  cout << "Enter Integer you want to find: ";
  cin >> floatQ;
  try {
    int pos = search(floatArr, floatQ, N);
    if (pos == -1) throw -1;
    cout << "Element found at " << pos << endl;
  } catch (int error) {
    cout << "Element Not Found"<<endl;
  };

  cout << "Enter " << N << " characters:";
  for (int i = 0; i < N; i++) cin >> chrArr[i];
  char charQ;
  cout << "Enter Charater you want to find: ";
  cin >> charQ;
  try {
    int pos = search(chrArr, charQ, N);
    if (pos == -1) throw -1;
    cout << "Element found at " << pos << endl;
  } catch (int error) {
    cout << "Element Not Found"<<endl;
  };
}
