#include <iostream>

using namespace std;

int main() {
  int N;
  cout << "Enter the number: ";
  cin >> N;
  try {
    if (N < 0 || N >= 100) {
      throw N;
    }
    if (N == 0) {
      throw 'a';
    }
    if (N == 1) {
      throw 1.0;
    }
  } catch (int N) {
    cout << "Invalid number" << endl;
    return 0;
  } catch (char N) {
    cout << "Invalid number" << endl;
    return 0;
  } catch (float N) {
    cout << "Invalid number" << endl;
    return 0;
  }
  cout << "Number: " << N << endl;
}