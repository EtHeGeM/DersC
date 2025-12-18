#include "account.hpp"

#include <stdexcept>
#include <utility>

namespace lesson09 {
BankAccount::BankAccount(std::string owner, double initial_balance)
    : owner_(std::move(owner)), balance_(initial_balance) {
    if (balance_ < 0.0) {
        throw std::invalid_argument("initial balance cannot be negative");
    }
}

void BankAccount::deposit(double amount) {
    if (amount < 0.0) {
        throw std::invalid_argument("deposit must be positive");
    }
    balance_ += amount;
}

bool BankAccount::withdraw(double amount) {
    if (amount < 0.0) {
        return false;
    }
    if (amount > balance_) {
        return false;
    }
    balance_ -= amount;
    return true;
}
}  // namespace lesson09
