#include <catch2/catch_all.hpp>

#include "types.hpp"

TEST_CASE("weighted_average clamps weight") {
    REQUIRE(lesson02::weighted_average(0, 100, 2.0) == Approx(100.0));
    REQUIRE(lesson02::weighted_average(0, 100, -1.0) == Approx(0.0));
}

TEST_CASE("within_byte_range checks bounds") {
    REQUIRE(lesson02::within_byte_range(0));
    REQUIRE_FALSE(lesson02::within_byte_range(300));
}

TEST_CASE("saturating_add prevents overflow") {
    const int max = std::numeric_limits<int>::max();
    REQUIRE(lesson02::saturating_add(max, 1) == max);
    REQUIRE(lesson02::saturating_add(-max, -max) == std::numeric_limits<int>::min());
    REQUIRE(lesson02::saturating_add(10, 5) == 15);
}
