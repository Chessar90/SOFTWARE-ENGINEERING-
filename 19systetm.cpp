#include <iostream>
#include <string>
#include <vector>

class Account {
public:
    std::string accountNumber;
    std::string holderName;
    double balance;
    std::vector<std::string> transactionHistory;

    Account(std::string accNum, std::string name, double bal)
        : accountNumber(accNum), holderName(name), balance(bal) {}

    void display() {
        std::cout << "Account Number: " << accountNumber 
                  << "\nHolder: " << holderName 
                  << "\nBalance: $" << balance << std::endl;
        std::cout << "Transaction History:\n";
        for (const auto& txn : transactionHistory) {
            std::cout << txn << std::endl;
        }
    }

    