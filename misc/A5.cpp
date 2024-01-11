#include <iostream>
using namespace std;
/**
 * 1) make a class Student which has 4 data members
Roll no, name, total, percentage
Make 2 functions getData(), printData()
Use array of objects
Make roll no as a static variable to assign value
*/
class Student {
  static int rollNo;
  string name;
  int total, percentage;

 public:
  void getData() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Total Marks: ";
    cin >> total;
    cout << "Enter Percentage:";
    cin >> percentage;
    rollNo++;
  }
  void printData() {
    cout << "RollNo: " << rollNo<<endl;
    cout << "Name: " << name<<endl;
    cout << "Total Marks: " << total<<endl;
    cout << "Percentage:" << percentage<<endl;
  }
};

int Student::rollNo = 0;

int main() {
  Student stus[3];
  for (int i = 0; i < 3; i++) {
    stus[i].getData();
    stus[i].printData();
  }
}