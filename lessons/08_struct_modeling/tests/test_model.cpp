#include <catch2/catch_all.hpp>

#include "model.hpp"

TEST_CASE("area computes rectangle area") {
    auto rect = lesson08::make_normalized({0, 0}, {4, 2});
    REQUIRE(rect.area() == Approx(8.0));
}

TEST_CASE("contains checks points") {
    auto rect = lesson08::make_normalized({0, 0}, {2, 2});
    REQUIRE(rect.contains({1, 1}));
    REQUIRE_FALSE(rect.contains({3, 3}));
}

TEST_CASE("translate moves point") {
    auto p = lesson08::translate({1, 1}, 2, -1);
    REQUIRE(p.x == 3);
    REQUIRE(p.y == 0);
}
