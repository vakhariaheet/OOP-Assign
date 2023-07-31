// 11. Write a C++ program to calculate the sum of 5 subject and find the percentage. 

#include <iostream>

using namespace std;

int main(){
    int sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks of 5 subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = (sum / 500.0) * 100;
    cout << "Sum of marks: " << sum << endl;
    cout << "Percentage: " << percentage << endl;
}