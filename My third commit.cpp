#include <iostream>
#include <string>

    Account(std::string accNum, std::string name, double bal) 
        : accountNumber(accNum), holderName(name), balance(bal) {}

    void display() {
        std::cout << "Account: " << accountNumber 
                  << "\nHolder: " << holderName 
                  << "\nBalance: $" << balance << std::endl;
    }
};