#include "polymorphism.hpp"

#include <iostream>
#include <utility>

namespace lesson10 {
CardProcessor::CardProcessor(std::string card_number) : card_number_(std::move(card_number)) {}

bool CardProcessor::process(double amount) {
    std::cout << "Charging card ending " << card_number_.substr(card_number_.size() - 4)
              << " for " << amount << "\n";
    return amount >= 0.0;
}

std::string CardProcessor::name() const { return "CardProcessor"; }

bool CashProcessor::process(double amount) {
    std::cout << "Accepting cash payment of " << amount << "\n";
    return amount >= 0.0;
}

std::string CashProcessor::name() const { return "CashProcessor"; }

bool checkout(PaymentProcessor &processor, double amount) { return processor.process(amount); }

std::unique_ptr<PaymentProcessor> make_cash() { return std::make_unique<CashProcessor>(); }
}  // namespace lesson10
