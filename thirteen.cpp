

int main() {
    Bank bank;
    std::string accNum;
    double withdrawAmount;

    std::cout << "Enter account number to withdraw from: ";
    std::cin >> accNum;

    Account* account = bank.getAccount(accNum);
    if (account) {
        std::cout << "Enter withdrawal amount: ";
        std::cin >> withdrawAmount;
        account->withdraw(withdrawAmount);
    } else {
        std::cout << "Account not found." << std::endl;
    }

    return 0;
}