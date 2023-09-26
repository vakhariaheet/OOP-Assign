#include <iostream>

using namespace std;

int hasAt(string email) {
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            return i;
        }
    }
    return -1;
}

int main() {
    string email;
    cout << "Enter the email address: ";
    cin >> email;
    try {
        if (hasAt(email) == -1) {
            throw email;
        }
    } catch (string email) {
        cout << "Invalid email address" << endl;
        return 0;
    }
    cout << "Email address: " << email << endl;
}