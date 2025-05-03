
class Account {
public:
    std::string accountNumber;
    std::string holderName;
    double balance;
    std::vector<std::string> transactionHistory;

    Account(std::string accNum, std::string name, double bal)
        : accountNumber(accNum), holderName(name), balance(bal) {}
        