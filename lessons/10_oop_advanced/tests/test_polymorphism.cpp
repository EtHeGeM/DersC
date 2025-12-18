#include <catch2/catch_all.hpp>

#include "polymorphism.hpp"

TEST_CASE("checkout invokes processor") {
    class StubProcessor : public lesson10::PaymentProcessor {
    public:
        bool process(double amount) override {
            called = true;
            last_amount = amount;
            return true;
        }
        std::string name() const override { return "Stub"; }
        bool called = false;
        double last_amount = 0.0;
    };

    StubProcessor stub;
    REQUIRE(lesson10::checkout(stub, 10.0));
    REQUIRE(stub.called);
    REQUIRE(stub.last_amount == Approx(10.0));
}

TEST_CASE("CardProcessor accepts non-negative amounts") {
    lesson10::CardProcessor card("5555666677778888");
    REQUIRE(card.process(1.0));
    REQUIRE_FALSE(card.process(-1.0));
}
