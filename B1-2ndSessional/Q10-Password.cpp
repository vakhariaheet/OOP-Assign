#include <iostream>
#include <ctype.h>
using namespace std;
int isPasswordValid(string q) { 
    int hasLower=0, hasUpper=0, hasSpecial=0;
    for (int i = 0; i < q.length();i++) {
      if (isupper(q[i])) hasUpper = 1;
      else if (islower(q[i])) hasLower = 1;
      else if(q[i] == '@' || q[i] == '#' || q[i] == '$' || q[i] == '%')
        hasSpecial = 1;
    }
    return hasLower && hasUpper && hasSpecial;
}

int main() { 
    string password;
    try {
      cout << "Enter a password:";
      cin >> password;
      if (!isPasswordValid(password)) throw password;
      cout << "Password is Valid"<<endl;
    }catch(string error){
      cout << "Password must contain a lowercase letter , a uppercase letter "
             << "and a symbol(@,#,$,%)"
           << endl;
    }
 }