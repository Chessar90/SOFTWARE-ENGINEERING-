#include <iostream>
#include <vector>

class Bank {
public:
    std::vector<Account> accounts;

    void addAccount(Account acc) {
        accounts.push_back(acc);
    }

    