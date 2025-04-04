#includ

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

    void displayAllAccounts() {
        for (auto& acc : accounts) {
            acc.display();
            std::cout << "---------------------" << std::endl;
        }
    }
};

