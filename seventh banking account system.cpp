#include <iostream>
#include <string>
#include <vector>


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