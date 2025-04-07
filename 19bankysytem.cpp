

int main() {
    Bank bank;
    std::string accNum;

    std::cout << "Enter account number to search: ";
    std::cin >> accNum;

    Account* account = bank.getAccount(accNum);
    if (account) {
        account->display();
    } else {
        std::cout << "Account not found." << std::endl;
    }

    return 0;
}