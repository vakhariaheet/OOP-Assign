#include <iostream>

using namespace std;

class Student {
 public:
  int code,marks;
  void setCode(int code) { this->code = code; }
  void setMarks(int marks) { this->marks = marks; }
};

void sort(Student arr[], int size) {
  Student temp;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[j].marks > arr[i].marks) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  Student arr[5];
  int tempCode, tempMarks;
  for (int i = 0; i < 5; i++) {
    cout << "Enter Info for Student " << i + 1 << endl;
    cout << "Enter Code:";
    cin >> tempCode;
    cout << "Enter Marks:";
    cin >> tempMarks;
    arr[i].setCode(tempCode);
    arr[i].setMarks(tempMarks);
  };
  sort(arr, 5);
  cout << "Student with Code " << arr[0].code << " and "
       << arr[1].code << " secured top 2 and their marks are "
       << arr[0].marks << " and " << arr[1].marks << " respectively ."
       << endl;
}