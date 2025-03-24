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

    