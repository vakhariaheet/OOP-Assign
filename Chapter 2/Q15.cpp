// Write a C++ Program to addition and subtraction of two values using Constructor.

#include <iostream>

using namespace std;

class AddSub{
    private:
        int num1, num2;
    public:
        AddSub(int num1, int num2){
            this->num1 = num1;
            this->num2 = num2;
        }
        void add(){
            cout << "Addition: " << num1 + num2 << endl;
        }
        void sub(){
            cout << "Subtraction: " << num1 - num2 << endl;
        }
};

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    AddSub as(num1, num2);
    as.add();
    as.sub();
}