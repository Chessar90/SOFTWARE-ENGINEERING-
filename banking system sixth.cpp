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
};

class Bank {
public:
    std::vector<Account> accounts;

    void addAccount(Account acc) {
        accounts.push_back(acc);
    }

    Account* getAccount(std::string accNum) {
        for (auto& acc : accounts) {
            if (acc.accountNumber == accNum) {
                return &acc;
            }
        }
        return nullptr;
    }
};

int main() {
    Bank bank;
    std::string accNum, holderName;
    double initialDeposit;

    std::cout << "Enter account number: ";
    std::cin >> accNum;
    std::cout << "Enter holder name: ";
    std::cin >> holderName;
    std::cout << "Enter initial deposit: ";
    std::cin >> initialDeposit;

    Account newAccount(accNum, holderName, initialDeposit);
    bank.addAccount(newAccount);

    std::cout << "Account created successfully!" << std::endl;
    newAccount.display();

    return 0;
}