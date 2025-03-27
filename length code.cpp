#include <iostream>
#include <string>
#include <vector>

class Account {
public:
    std::string accountNumber;
    std::string holderName;
    double balance;

    Account(std::string accNum, std::string name, double bal)
        : accountNumber(accNum), holderName(name), balance(bal) {}

    void display() {
        std::cout << "Account Number: " << accountNumber 
                  << "\nHolder: " << holderName 
                  << "\nBalance: $" << balance << std::endl;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "$" << amount << " deposited. New balance: $" << balance << std::endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
            return false;
        }
        balance -= amount;
        std::cout << "$" << amount << " withdrawn. New balance: $" << balance << std::endl;
        return true;
    }
};

