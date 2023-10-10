//Write a C++ Program to take 2 matrices from user for multiplies exception if multiplication of matrices are not possible
#include <iostream>
using namespace std;

int main() { 
    int r1, c1;
    int r2, c2;
    cout << "Enter Rows and Columns of First Matrix:";
    cin >> r1 >> c1;
    cout << "Enter Rows and Columns of Second Matrix: ";
    cin >> r2 >> c2;
    try {
        if(c1 != r2){
          throw 2;
        }
    }catch(int error) {
        cout << "Invalid Matrices Order:" << endl;
        return 0;
    }
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    cout << "Enter First Matrix (" << r1 << "x" << c1 << ") :";
    for (int i = 0; i < r1;i++){
        for (int j = 0; j < c1;j++){
          cin >> matrix1[i][j];
        }
    }
    cout << "Enter Second Matrix (" << r1 << "x" << c1 << ") :";
    for (int i = 0; i < r2;i++){
        for (int j = 0; j < c2;j++){
          cin >> matrix2[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < r1;i++){
        for (int j = 0; j < c2;j++){
          sum = 0;
          for (int k = 0; k < c1;k++){
            sum += matrix1[i][k] * matrix2[k][j];
          }
          result[i][j] = sum;
        }
    }
    cout << "Resultant Matrix is : " << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2;j++){
          cout << result[i][j]<<" ";
        }
        cout << endl;
    }
}
