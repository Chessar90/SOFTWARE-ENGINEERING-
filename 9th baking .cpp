
int main() {
    Bank bank;
    std::string accNum;
    double depositAmount;

    std::cout << "Enter account number to deposit: ";
    std::cin >> accNum;

    Account* account = bank.getAccount(accNum);
    if (account) {
        std::cout << "Enter deposit amount: ";
        std::cin >> depositAmount;
        account->deposit(depositAmount);
    } else {
        std::cout << "Account not found." << std::endl;
    }

    return 0;
}