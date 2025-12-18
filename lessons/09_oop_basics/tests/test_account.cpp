#include <catch2/catch_all.hpp>

#include "account.hpp"

TEST_CASE("BankAccount enforces non-negative balance") {
    REQUIRE_THROWS_AS(lesson09::BankAccount("x", -1.0), std::invalid_argument);
}

TEST_CASE("BankAccount deposit and withdraw work") {
    lesson09::BankAccount account("Sam", 100.0);
    account.deposit(25.0);
    REQUIRE(account.withdraw(50.0));
    REQUIRE(account.balance() == Approx(75.0));
    REQUIRE_FALSE(account.withdraw(1000.0));
}
