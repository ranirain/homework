#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Конструктор
    BankAccount(std::string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    // Метод для внесения средств на счет
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited: " << amount << std::endl;
    }

    // Метод для снятия средств со счета
    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
        } else {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << std::endl;
        }
    }

    // Метод для получения текущего баланса
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account("12345678", 1000.0);

    std::cout << "Initial Balance: " << account.getBalance() << std::endl;

    account.deposit(500.0);
    std::cout << "Current Balance: " << account.getBalance() << std::endl;

    account.withdraw(200.0);
    std::cout << "Current Balance: " << account.getBalance() << std::endl;

    account.withdraw(1500.0); // Попытка снять больше, чем есть на счету
    std::cout << "Final Balance: " << account.getBalance() << std::endl;

    return 0;
}

