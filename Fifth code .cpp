#include <iostream>
#include <vector>

class Bank {

    Account* getAccount(std::string accNum) {
        for (auto& acc : accounts) {
            if (acc.accountNumber == accNum) {
                return &acc;
            }
        }
        return nullptr;
    }
};