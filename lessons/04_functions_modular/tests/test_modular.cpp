#include <catch2/catch_all.hpp>

#include "modular.hpp"

TEST_CASE("area computations") {
    REQUIRE(lesson04::area_rect(3, 4) == 12);
    REQUIRE(lesson04::area_square(5) == 25);
}

TEST_CASE("harmonic mean rejects empty input") {
    REQUIRE_THROWS_AS(lesson04::harmonic_mean({}), std::invalid_argument);
}

TEST_CASE("join concatenates with separators") {
    REQUIRE(lesson04::join({"a", "b", "c"}, ":") == "a:b:c");
}
