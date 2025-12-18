#pragma once

#include <memory>
#include <string>

namespace lesson10 {
class PaymentProcessor {
public:
    virtual ~PaymentProcessor() = default;
    virtual bool process(double amount) = 0;
    virtual std::string name() const = 0;
};

class CardProcessor : public PaymentProcessor {
public:
    explicit CardProcessor(std::string card_number);
    bool process(double amount) override;
    std::string name() const override;

private:
    std::string card_number_;
};

class CashProcessor : public PaymentProcessor {
public:
    bool process(double amount) override;
    std::string name() const override;
};

bool checkout(PaymentProcessor &processor, double amount);
std::unique_ptr<PaymentProcessor> make_cash();
}  // namespace lesson10
