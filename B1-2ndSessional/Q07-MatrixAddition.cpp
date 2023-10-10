/**
 * Write a C++ Program to take 2 matrices from user and perform an addition of 2
 * matrices in a function and return the result
 */
#include <iostream>

using namespace std;

// Defining Rows and Cols Size
#define ROWS 3
#define COLS 3

// Returning a Array of Pointer of size COLS and taking 2 matrices as parameters
int (*(matrixAdd(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS])))[COLS] {
  int(*result)[COLS] = new int[ROWS][COLS];
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  return result;
}

int main() {
  // Declaring 2 matrices and taking from the user
  int matrix1[ROWS][COLS], matrix2[ROWS][COLS];
  cout << "Enter First Matrix(" << ROWS << "x" << COLS << "): ";
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++) cin >> matrix1[i][j];
  cout << "Enter Second Matrix(" << ROWS << "x" << COLS << "): ";
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++) cin >> matrix2[i][j];
  // Storing the matrix returned by the function
  int(*result)[COLS] = matrixAdd(matrix1, matrix2);
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
  //Freeing the memory
  delete result;
}
