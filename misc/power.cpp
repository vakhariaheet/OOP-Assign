#include <iostream>

using namespace std;

int power(int m, int n = 2) { 
    int result=1;
    for (int i = 0; i < n; i++) result *= m;
    return result;
}

int main() { 
    cout << power(2, 5)<<endl; 
    cout << power(2)<<endl; 
}