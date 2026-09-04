#include "Account.h"

int Account::totalAccounts = 0;

Account::Account(std::string owner, double initialBalance){
    this->owner =owner;
    this->balance = initialBalance;

    totalAccounts++;
}

Account::Account(const Account& other){
    this->owner =other.owner;
    this->balance = other.balance;

    totalAccounts++;
}

double Account::getBalance() const{
    return balance;
}


std::string Account::getOwner() const{
    return owner;
}

void Account::deposit(double amount){
    if(amount > 0){
        balance += amount;
    }
}

bool Account::withdraw(double amount){
    if(amount > 0 && amount <= balance){
        balance -= amount;
        return true;
    }

    return false;
}

bool Account::operator==(Account other){
    return balance ==other.balance;
}

int Account::getTotalAccounts(){
    return totalAccounts;
}

void Account::transfer(Account& other, double amount){
    if (amount > 0 && amount <= balance){
        balance -= amount;
        other.balance += amount;
    }
}