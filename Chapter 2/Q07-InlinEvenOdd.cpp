// Write a C++ program to make inline function to find odd/even. 

#include <iostream>

using namespace std;

inline void check(int num){
    if(num % 2 == 0)
        cout << num << " is even" << endl;
    else
        cout << num << " is odd" << endl;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    check(num);
}
