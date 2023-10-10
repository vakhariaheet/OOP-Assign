#include <iostream>
using namespace std;

int throwError() { throw 1; }

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int index;
  do {
    cin >> index;
    try {
      if (index > 5) throwError();
      cout << "Element at "<< index << " is  " << arr[index];
      break;
    } catch (int error) {
      cout << "num2 can't ne zero"<<endl;
    }
  } while (1);
}