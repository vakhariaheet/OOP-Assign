#include <iostream>

using namespace std;

int hasVowel(string str) {
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u') {
      return 1;
    }
  }
  return 0;
}

int main() {
  string str;
  cout << "Enter the string: ";
  cin >> str;
  try {
    if (hasVowel(str) == 0) {
      throw str;
    }
    cout << "String: " << str << endl;
  } catch (string str) {
    cout << "String does not contain any vowel" << endl;
  }
}