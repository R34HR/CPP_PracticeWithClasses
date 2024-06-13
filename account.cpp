#include "account.h"
#include <iostream>
#include <string>

void Account::tot_balance(){
     std::cout << "\n----------------------------------------------------------------" << std::endl;

    std::cout << "\n\n" << name << "'s  total balance is: $" << balance << "\n\n" << std::endl;
     std::cout << "\n----------------------------------------------------------------" << std::endl;

}

void Account::deposit(double amount){
    
    if (amount < 0) {
         std::cout << "\n----------------------------------------------------------------" << std::endl;

        std::cout << "Invalid amount to deposit" << std::endl;

         std::cout << "\n----------------------------------------------------------------" << std::endl;

    } else {
      this->balance = balance + amount;
       std::cout << "\n----------------------------------------------------------------" << std::endl;

      std::cout << "\n Amount deposited: $" << amount << "\n\n" <<std::endl;
       std::cout << "\n----------------------------------------------------------------" << std::endl;

    }
}
void Account::set_name(std::string given_name){
    this->name = given_name;

    std::cout << "\n----------------------------------------------------------------" << std::endl;

    std::cout << "Hello, " << name << " and welcome to Self-Bank"<<std::endl;

     std::cout << "\n----------------------------------------------------------------" << std::endl;

}
void Account::withdrawl(double amount){
    if((balance - amount) < 0){
         std::cout << "\n----------------------------------------------------------------" << std::endl;

        std::cout << "\n Withdrawl amount of $" << amount << ", cannot be processed for it results in the negative balance of $" 
        << (balance - amount) << "\n\n" << std::endl; 

         std::cout << "\n----------------------------------------------------------------" << std::endl;

    } else {
        balance = balance - amount;
         std::cout << "\n----------------------------------------------------------------" << std::endl;

        std::cout << "Withdrew: $" << amount << " --> Current balance: $" << balance << std::endl;

         std::cout << "\n----------------------------------------------------------------" << std::endl;

    }
}
// Here we use a Delegating constructor, which calls the constructor with most parameters
// and reduces the need to re-write initilzation code by simply calling other constructor.


/* 
    UPDATE ON 05/15/24 --> !NOTICE!: if you pay close attention, you realize that we have created a constructor using default parameters and values. --> 
    these are going to be used in conjunction with constructor initilization lists in order to initilize all values before constrcutor is created and
    to eliminate as much overloaded constructor as possible and to accomplish initiization prior to the constructor being created.

*/ 
Account::Account(std::string nombre, double deposit): name{nombre}, balance{deposit}{
    std::cout << "Constructor with one args" << std::endl;
}
Account::Account(const Account &source) : name{source.name}, balance{source.balance} {
    std::cout << "Copy Constructor - made a copy of: " << source.name << std::endl;
}
Account::Account(Account &&source) noexcept : name(source.name) {
    source.name = nullptr;
    std::cout << "Move constructor was called" << std::endl;
}