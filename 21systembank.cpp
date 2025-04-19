

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