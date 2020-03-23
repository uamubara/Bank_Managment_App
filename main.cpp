#include <iostream>
#include <string>
using namespace std;

string name; // global variable

void WithDraw();

int main() {

    char option;


    cout << " Hello, please enter your first and last name: " << endl;
    getline(cin, name);
    cout << "Welcome " << name << ", How can we help you?" << endl;

    cout << " Please select an option from the menu below" << endl;

    cout << " W - WITHDRAW" << endl;
    cout << " D - DEPOSIT" << endl;
    cout << " B - VIEW BALANCE" << endl;
    cout << " T - VIEW TRANSACTIONS" << endl;
    cout << " E - EXIT (Logout)" << endl << endl;
    cout << "What would you like to do today?" << endl;
    cout << "Enter your choice here " << " (w, d, b, t, e) : ";
    cin >> option;



  switch (option){
      case 'w':
      case 'W':
        WithDraw();
        break;

      case 'D':
      case 'd':
          cout << "Deposit" << endl;
          break;

      case 'B':
      case 'b':
          cout << " Balance" << endl;
          break;

      case 'T':
      case 't':
          cout << "Transactions" << endl;
          break;

      case 'E' :
      case 'e' :
          cout << "Logging out...Bye " << name << endl;
          break;

  }

}

void WithDraw() {
    cout << "withdrawing" << endl;
    cout << name << ", You have withdrawed from your account!" << endl;

}
