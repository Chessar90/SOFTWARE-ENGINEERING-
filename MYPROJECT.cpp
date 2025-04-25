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

    void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back("Deposited: $" + std::to_string(amount));
        std::cout << "$" << amount << " deposited. New balance: $" << balance << std::endl;
    }

    bool withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds!" << std::endl;
            return false;
        }
        balance -= amount;
        transactionHistory.push_back("Withdrew: $" + std::to_string(amount));
        std::cout << "$" << amount << " withdrawn. New balance: $" << balance << std::endl;
        return true;
    }

    void checkBalance() {
        std::cout << "Current balance: $" << balance << std::endl;
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
    std::string accNum;

    // Create some accounts and perform actions
    Account acc1("1001", "John Doe", 500.0);
    bank.addAccount(acc1);
    Account acc2("1002", "Jane Smith", 1000.0);
    bank.addAccount(acc2);

    std::cout << "Enter account number to check history: ";
    std::cin >> accNum;

    Account* account = bank.getAccount(accNum);
    if (account) {
        account->display();
    } else {
        std::cout << "Account not found." << std::endl;
    }

    return 0;
}