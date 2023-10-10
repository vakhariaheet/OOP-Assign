#include <iostream>
// Write a C+# program to input a age and gender from user.Check the following criteria, If criteria matches then print "Eligible for Marriage" other throw an exception and provide a appropriate message.
// Girl: Age should be greater or equal to 18
// Boy: Age should be greater, or equal to 21
using namespace std;

int main() { 
    int age;
    string gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your Gender(Male/Female): ";
    cin >> gender;
    try {
        if((gender == "Male" && age <21) || (gender == "Female" && age < 18))
          throw 1;
        cout << "Eligible for Marriage"<<endl;
    }catch(int error) {
        cout << "Not Eligible for Marriage"<<endl;
    }
}