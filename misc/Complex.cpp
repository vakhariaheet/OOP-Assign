#include <iostream>
/**
 * Write a c++ program to create a class complex having two
integers real and image.
 The types of constructors to be used
 i) Default Constructor
 ii) One argument constructor
 iii) Two arguments constructor
 iv) Copy constructor
 Show () and sum() functions are friend functions,
displaying and finding the addition of two objects
respectively
*/
using namespace std;
class Complex {
  int real, imaginary;
  public:
   Complex() { 
     real = 0;
     imaginary = 0;
   }
 Complex(int real) { 
     this->real = real;
     this->imaginary = 0;
 }
 Complex(int real, int imaginary) { 
     this->real = real;
     this->imaginary = imaginary;
 }
 Complex(Complex &inst) { 
    this->real = inst.getReal();
    this->imaginary = inst.getImaginary();
 }

 int getReal() const { return real; }
 int getImaginary() const { return imaginary; }
   friend void show(Complex inst);
   friend void add(Complex inst,Complex inst2);
};

void show(Complex inst){
   cout << "Complex No.: " << inst.real << " + " << inst.imaginary << "i"
        << endl;
}

void add(Complex inst, Complex inst2) { 
    int real = inst.real + inst2.real;
    int imaginary = inst.imaginary + inst2.imaginary;

    cout << "Sum is " << real << " + " << imaginary << "i"<<endl;
}

int main() { 
    Complex c1(20), c2(23,34);
    show(c2
    );
    add(c1, c2);
}