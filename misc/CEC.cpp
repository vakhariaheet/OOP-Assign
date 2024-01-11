#include <iostream>

using namespace std;

int getTotalWords(string q) {
  int words = 1;
  for (int i = 0; i < q.length(); i++){
    if (q[i] == ' ') words++;
  }
  return words;
}

int main() { 
    string str;
    getline(cin, str);
    cout << "Total Words: " << getTotalWords(str)<<endl;
    cout << "Total Characters: " << str.length() << endl;
}

// Hello There How