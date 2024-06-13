#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account {
private:
    std::string name;
    long double balance;
public:
    void set_name(std::string given_name);
    void deposit (double amount);
    void tot_balance();
    void withdrawl(double amount); 
    //no args constructor is wrriten as a constructor initilization list in order
    // to formaly initilize all variables instead of asssigned a value AFTER its initilized

    /* UPDATE ON 05/15/24 --> notice how we eliminated the no args constructor and insetead Im using a default
    parameter and value constructor in order to prevent overloading constructors */
    Account(std::string nombre = "N/A", double deposit = 0.0);

    //Implemented a copy constructor that allows us to copy objects without sacrificing making another copy on the stack. 
    Account(const Account &source);
    // Implements a Move constructor which essentially 'moves' an object instead of copying it in order to remove unecessary copying onto heap
    Account(Account &&source) noexcept;

};
#endif