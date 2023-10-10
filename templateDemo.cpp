#include <iostream>

using namespace std;


template <class T,class D>
class Pair{
    T first;
    D second;
    public:
    Pair() { 
        this->first = 10;
        this->second = 10.5;
    }
    
    void display() { 
        cout << "First: " << first<<endl;
        cout << "Second: " << second;
    }
};

int main() { 
    Pair<int, double> pen;
    pen.display();
}