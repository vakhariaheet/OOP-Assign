
#include <iostream>

using namespace std;

int main() {
  int accountNo;
  float balance, withdrawAmount;
  cout << "Enter the account number: ";
  cin >> accountNo;
  cout << "Enter the balance: ";
  cin >> balance;
  do {
    cout << "Enter the withdraw amount: ";
    cin >> withdrawAmount;
    try {
      if (withdrawAmount > balance) {
        throw withdrawAmount;
      }
    } catch (float withdrawAmount) {
      cout << "Withdraw amount is greater than balance" << endl;
    }
  } while (withdrawAmount > balance);
  cout << "Account number: " << accountNo << endl;
  cout << "Balance: " << balance << endl;
  cout << "Withdraw amount: " << withdrawAmount << endl;
}