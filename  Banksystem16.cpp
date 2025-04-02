

int main() {
    Bank bank;
    std::string accNum;

    std::cout << "Enter account number to check balance: ";
    std::cin >> accNum;

    Account* account = bank.getAccount(accNum);
    if (account) {
        account->checkBalance();
    } else {
        std::cout << "Account not found." << std::endl;
    }

    return 0;
}