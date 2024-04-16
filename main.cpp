#include <iostream>
#include <limits>
#include "account.h"
using namespace std;

int main() {

    char option {};
    string name;
    double deposit_amount;

    Account default_acct;

    do {

        option = {};

        cout << "Hello and Welcome to Account tracker! \n \n";
        cout << "\n Option A: Set Name: \n Option B: Deposit \n Option C: Total Balance \n Option X: Exit \n\n" <<
        "Pleaser enter the option you wish to perform: ";
        cin >> option;


        switch (option){
            case 'a':
            case 'A':
                cout << "Pleaser enter the name you wish to set:";
                cin >> name;
                while(cin.fail()){
                    cout << "Invalid Name: Please enter valid name\n"; 
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Please enter your name: ";
                    cin >> name;
                }
                cout << "\n";
                default_acct.set_name(name);
                cout << "\n \n";
                break;
            case 'b':
            case 'B':
                cout << "Enter the amount you wish to deposit: ";
                cin >> deposit_amount;
                while(cin.fail()){
                    cout << "Invalid Amount: Please enter valid Amount to deposit.\n"; 
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Please enter the amount to deposit: ";
                    cin >> deposit_amount;
                }
                cout << "\n";
                default_acct.deposit(deposit_amount);
                cout << "\n \n";
                break;
            case 'c':
            case 'C':
                cout << "\n";
                default_acct.tot_balance();
                cout << "\n \n";
                break;
            case 'x':
            case 'X':
            default:
                cout << "\n";
                cout << "Thank you for choosing us. Goodbye!" << endl;
                cout << "\n \n";
                break;
            
        }

    } while (option != 'X' && option != 'x');


    return 0;
}