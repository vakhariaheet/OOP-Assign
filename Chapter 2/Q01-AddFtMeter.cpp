#include <iostream>

using namespace std;

class DM;

class DB {
  int feet, inches;

 public:
  void getdata() {
    cout << "Enter feet and inches: ";
    cin >> feet >> inches;
  }
  void showdata() {
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
  }
  friend DB add(DB db, DM dm);
};

class DM {
  int meters, centimeters;

 public:
  void getdata() {
    cout << "Enter meters and centimeters: ";
    cin >> meters >> centimeters;
  }
  void showdata() {
    cout << "Meters: " << meters << endl;
    cout << "Centimeters: " << centimeters << endl;
  }
  friend DB add(DB db, DM dm);
};

DB add(DB db, DM dm) {
  int feet = db.feet + (dm.meters * 3.28084);
  int inches = db.inches + (dm.centimeters * 0.393701);
  if (inches >= 12) {
    feet += inches / 12; 
    inches = inches % 12;
  }
  return DB(feet, inches);
};

int main() {
  DB db;
  DM dm;
  db.getdata();
  dm.getdata();
  DB result = add(db, dm);
  result.showdata();
}
 