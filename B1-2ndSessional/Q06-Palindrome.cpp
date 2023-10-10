#include <exception>
#include <iostream>
using namespace std;
/**
 * Write a C++ program to check a string is palindrome or now. If the string
length is less than 3 characters, Throw an custom exception "Please enter more
characters". (For eg. dad string is palindrome)
*/

class MyError : public exception {
 public:
  const char* what() const throw() { return "Please enter more Characters"; }
};

int isPalindrome(string q) {
  int size = q.length();
  char reverse[size];
  int count = size - 1;
  for (int i = 0; i < size; i++) {
    reverse[i] = q[count];
    count--;
  }
  for (int i = 0; i < size; i++) {
    if (q[i] != reverse[i]) return 0;
  }
  return 1;
}

int main() {
  string q;
  cout << "Enter a string: ";
  cin >> q;
  try {
    if (q.length() < 3) {
      MyError e1;
      throw e1;
    }
    if (isPalindrome(q))
      cout << q << " is Palindrome String" << endl;
    else
      cout << q << " is not a Palindrome String" << endl;
  } catch (exception& error) {
    cout << error.what() << endl;
  }
}
