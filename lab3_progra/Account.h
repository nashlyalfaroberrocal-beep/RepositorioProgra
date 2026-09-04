#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string owner;
    double balance;

    static int totalAccounts;

public:
    Account(std::string owner, double initialBalance);

    double getBalance() const;

    std::string getOwner() const;

    Account(const Account& other);

    void deposit(double amount);

    bool withdraw(double amount);

    bool operator==(Account other);

    static int getTotalAccounts();

    void transfer(Account& other, double amount);
};

#endif