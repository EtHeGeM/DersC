#pragma once

#include <string>

namespace lesson09 {
class BankAccount {
public:
    BankAccount(std::string owner, double initial_balance);

    void deposit(double amount);
    bool withdraw(double amount);
    double balance() const { return balance_; }
    const std::string &owner() const { return owner_; }

private:
    std::string owner_;
    double balance_{};
};
}
