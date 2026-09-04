#include "Account.h"

int Account::totalAccounts = 0;

Account::Account(std::string owner, double initialBalance) {
    this->owner =owner;
    this->balance = initialBalance;

    totalAccounts++;
}

double Account::getBalance() const{
    return balance;
}


std::string Account::getOwner() const{
    return owner;
}