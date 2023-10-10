// Write a C++ program to take a value from user and check the number is
// armstrong or not, If not than raise an exception.

#include <iostream>

using namespace std;

int isArmstrong(int N) {
  int sum = 0;
  int temp = N;
  while (temp != 0) {
    int digit = temp % 10;
    sum += digit * digit * digit;
    temp /= 10;
  }
  if (sum == N) {
    return 1;
  }
  return 0;
}

int main() {
  int N;
  cout << "Enter the number: ";
  cin >> N;
  try {
    if (isArmstrong(N) == 0) {
      throw N;
    }
    cout << "Number is armstrong" << endl;
  } catch (int N) {
    cout << "Number is not armstrong" << endl;
  }
}