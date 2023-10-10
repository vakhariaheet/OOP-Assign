// Write a program that has a template class Employee to read and print the
// details of employee id, name and salary. If salary is less than 50000. than
// throw an exception "Improvement Needed in Performance".
#include <iostream>

using namespace std;

template <class T>
class Employee {
  T empId;
  string name;
  float salary;

 public:
  void readInfo() {
    cout << "-----------------------Employee Details-----------------------"
         << endl;
    cout << "Enter Name:";
    cin >> name;
    cout << "Enter Id:";
    cin >> empId;
    cout << "Enter Salary:";
    cin >> salary;
    cout << "---------------------------------------------------------------"
         << endl;
    if (salary < 50000) throw salary;
  }
  void printInfo() {
    cout << "-----------------------Employee Details-----------------------"
         << endl;
    cout << "Name:" << name<<endl;
    cout << "Id:" << empId<<endl;
    cout << "Salary:" << salary<<endl;
    cout << "---------------------------------------------------------------"
         << endl;
  }
};

int main() {
  Employee<int> e1;
  try {
    e1.readInfo();
    e1.printInfo();
  } catch (float error) {
    cout << "Improvement Needed in Performance" << endl;
  }
}