#include "account.h"
#include <iostream>
#include <string>

void Account::tot_balance(){
    std::cout << name << "'s  total balance is: " << balance << std::endl;
}

void Account::deposit(double amount){
    balance = balance + amount;

    std::cout << "Amount deposited: " << amount << std::endl;
}
void Account::set_name(std::string given_name){
    name = given_name;

    std::cout << "Hello, " << name << std::endl;
}