#include <iostream>
using namespace std;
// An election is contested by five candidates. The candidates are
// numbered 1 to 5 and the voting is done by marking the
// candidate number on the ballot paper. Write a program to read
// the ballots and count the votes cast for each candidate using an
// array variable count. In case a number is read outside the
// range of 1 to 5, the ballot should be considered as a spoilt
// ballot’ and the program should also count the number of spoilt
// ballots.
class Ballot {
  int votes;
  
  public:
   Ballot() { votes=0; }
   void increment() { votes++; }
   int getVotes() { return votes; }
};

int main() { 
    Ballot candidates[6];
    int vote;
    for (int i = 0; i < 5; i++) {
      cout << "Enter your Vote: ";
      cin >> vote;
      if (vote < 0 || vote >= 5) candidates[5].increment();
      else
        candidates[vote - 1].increment();
    }

    for (int i = 0; i < 5;i++){
      cout << "Candidate " << i + 1 << " Votes : " << candidates[i].getVotes()
           << endl;
    }
    cout << "Spoilt Votes: " << candidates[5].getVotes()<<endl;
}
