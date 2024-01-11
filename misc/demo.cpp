#include <iostream>

using namespace std;

class Student {
  string name;
  int rollNo;

  public:
   string getName() { return name; }
   int getRollNo() { return rollNo; }
   void setName(string name1) { name = name1; }
   void setRollNo(int rollNo1) { rollNo = rollNo1; }
}

int main(){
   Student s1;
   s1.setName("Heet Vakharia");
   s1.setRollNo(114);

   cout << "Name: " << s1.getName()<<endl;
   cout << "RollNo: " << s1.getRollNo()<<endl;
}