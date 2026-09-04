#include <iostream>
#include "Account.h"

int main() {

    Account account1("Nashly", 50000);
    Account account2("Yair", 50000);
    Account account3("Luna", 30000);


    account1.deposit(10000);

    bool successfulWithdrawal = account1.withdraw(20000);

    if(successfulWithdrawal){
        std::cout << "El retiro se ha realizado correctamente" << std::endl;
    }
    else{
        std::cout << "No se pudo realizar el retiro" << std::endl;
    }

    successfulWithdrawal = account2.withdraw(100000);

    if(successfulWithdrawal){
        std::cout << "El retiro se ha realizado correctamente" << std::endl;
    }
    else{
        std::cout << "No hay suficiente saldo para realizar el retiro" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Propietario: " << account1.getOwner() <<std::endl;
    std::cout << "Saldo: " << account1.getBalance() << std::endl;
    std::cout << std::endl;

    std::cout << "Propietario: " << account2.getOwner() << std::endl;
    std::cout << "Saldo: " << account2.getBalance()<< std::endl;
    std::cout << std::endl;

    std::cout << "Propietario: " << account3.getOwner() << std::endl;
    std::cout << "Saldo: " << account3.getBalance()<< std::endl;
    std::cout << std::endl;

    if(account1 == account2){
        std::cout << "Las cuentas tienen el mismo saldo" << std::endl;
    }
    else{
        std::cout << "Las cuentas tienen diferente saldo" << std::endl;
    }


    Account accountCopy(account3);

    std::cout << std::endl;
    std::cout << "Cuents copiada: " << accountCopy.getOwner() << std::endl;
    std::cout << "Saldo de la cuenta copiada: "
        << accountCopy.getBalance() << std::endl;

    std::cout << "Total de cuentas creadas: "
        << Account::getTotalAccounts()
        << std::endl;


    account1.transfer(account3,5000);

    std::cout << std::endl;
    std::cout << "Despues de la transferencia: " << std::endl;

    std::cout << account1.getOwner()
        << " tiene "
        << account1.getBalance()
        << std::endl;

    std::cout << account3.getOwner()
        << " tiene "
        << account3.getBalance()
        << std::endl;

    return 0;
}