#include <iostream>

using namespace std;

class Complex{
    private:
        int real, imaginary;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            imaginary = i;
        }
        Complex add(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            return temp;
        }
        void display(){
            cout << real << " + " << imaginary << "i" << endl;
        }
};

int main(){
    int r1, i1, r2, i2;
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1), c2(r2, i2), c3;
    c3 = c1.add(c2);
    c3.display();
}