#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include "account.h"
using namespace std;

void greeting (){
        cout << "\n \n Hello and Welcome to SafeBank: Account tracker! \n \n";
        cout << "\n Option A: Set Name: \n Option B: Display account balance  \n Option C: Deposit \n Option D: Withdrawl \n Option X: Exit \n\n" <<
        "Please enter the option you wish to perform: ";
}

int main() {
    string input;
    char option {};
    string name;
    long double amount;

    Account default_acct;

    do {

        option = {};
        greeting();
        cin >> input;

        while(input.length() != 1){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "ERROR: Invalid Input Length --> Please enter a VALID option: \n";
                greeting();
                cin >> input;
        }

        option = input[0];

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
                default_acct.tot_balance();

                break;
            case 'c':
            case 'C':
                amount = {0.0};
                cout << "Enter the amount you wish to deposit: ";
                cin >> amount;
                while(cin.fail()){
                    cout << "Invalid Amount: Please enter valid Amount to deposit.\n"; 
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Please enter the amount to deposit: ";
                    cin >> amount;
                }
                cout << "\n";
                default_acct.deposit(amount);
                cout << "\n \n";
                break;
            case 'd':
            case 'D':
                amount = {0.0};
                cout << "Enter the amount you wish to withdraw: $";
                cin >> amount;
                while(cin.fail()){
                    cout << "Invalid Amount: Please enter valid Amount you wish to withdraw.\n"; 
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Please enter the amount to withdraw: ";
                    cin >> amount;
                }
                default_acct.withdrawl(amount);
                break;
            case 'x':
            case 'X':
                cout << "\n";
                cout << "Thank you for choosing us. Goodbye!" << endl;
                cout << "\n \n";
                break;
            default:
                cout << "Option:" << option << " is not an option! Please try again" << endl;
            
        }

    } while (option != 'X' && option != 'x');


    return 0;
}