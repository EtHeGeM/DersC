#include <catch2/catch_all.hpp>

#include "raii.hpp"

TEST_CASE("ResourceGuard stores values") {
    lesson07::ResourceGuard guard(2);
    guard.set(0, 3);
    guard.set(1, 4);
    REQUIRE(lesson07::sum_buffer(guard) == 7);
}

TEST_CASE("make_int returns unique ownership") {
    auto ptr = lesson07::make_int(9);
    REQUIRE(ptr);
    REQUIRE(*ptr == 9);
}

TEST_CASE("first_or_default handles empty") {
    REQUIRE(lesson07::first_or_default({}, 5) == 5);
}
