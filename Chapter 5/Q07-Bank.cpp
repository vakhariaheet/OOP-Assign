
#include <iostream>

    using namespace std;

int takeWithDrawAmt() {
  float withdrawAmount;
  cout << "Enter the withdraw amount: ";
  cin >> withdrawAmount;
  return withdrawAmount;
}

int main() {
  int accountNo;
  float balance, withdrawAmount;
  cout << "Enter the account number: ";
  cin >> accountNo;
  cout << "Enter the balance: ";
  cin >> balance;
  do {
    withdrawAmount = takeWithDrawAmt();
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