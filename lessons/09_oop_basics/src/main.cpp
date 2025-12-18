#include "account.hpp"

#include <iostream>

int main() {
    lesson09::BankAccount account("Dana", 100.0);
    account.deposit(50.0);
    account.withdraw(70.0);
    std::cout << account.owner() << " balance: " << account.balance() << "\n";
    return 0;
}
