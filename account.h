#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account {
private:
    std::string name;
    double balance;
public:
    void set_name(std::string given_name);
    void deposit (double amount);
    void tot_balance();

};
#endif