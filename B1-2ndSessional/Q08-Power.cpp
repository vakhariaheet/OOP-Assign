/**
 * Write an overloaded template function power that calculate, power of
 * different datatype like Integer float and Double. It User enters the char
 * datatype then throw an exception that Invalid Datatype
 */

#include <iostream>

using namespace std;

template <class T>
T power(T base, int exp) {
  T res = 1;
  for (int i = 0; i < exp; i++) res *= base;
  return res;
}

int main() {
  int choice;
  cout << "=================================================" << endl;
  cout << "1. Int " << endl;
  cout << "2. Float" << endl;
  cout << "3. Double" << endl;
  cout << "4. Char " << endl;
  cout << "=================================================" << endl;
  cout << "Enter choice:";
  cin >> choice;
  int exp;
  cout << "Enter Exponent(N) (x^N) : ";
  cin >> exp;
  try {
    switch (choice) {
      case 1: {
        int base;
        cout << "Enter base: ";
        cin >> base;
        cout << "Result is  :" << power(base, exp);
        break;
      }
      case 2: {
        float base;
        cout << "Enter base: ";
        cin >> base;
        cout << "Result is  :" << power(base, exp);
        break;
      }
      case 3: {
        double base;
        cout << "Enter base: ";
        cin >> base;
        cout << "Result is  :" << power(base, exp);
        break;
      }
      case 4:
        throw 1;
        break;
      default:
        break;
    }
  } catch (int error) {
    cout << "Invalid Datatype" << endl;
  }
}
