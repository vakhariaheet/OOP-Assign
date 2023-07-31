// Write a C++ program to make inline function to find positive/ negative number.

#include <iostream>

using namespace std;

inline void check(int num){
    if(num >= 0)
        cout << num << " is positive" << endl;
    else
        cout << num << " is negative" << endl;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    check(num);
}