#include <catch2/catch_all.hpp>

#include "arrays_strings.hpp"

TEST_CASE("count_word counts occurrences") {
    REQUIRE(lesson05::count_word({"a", "b", "a"}, "a") == 2);
}

TEST_CASE("prefix_sums accumulates values") {
    REQUIRE(lesson05::prefix_sums({1, 2, 3}) == std::vector<int>{1, 3, 6});
}

TEST_CASE("split_view tokenizes without allocations in string") {
    const auto tokens = lesson05::split_view("x:y", ':');
    REQUIRE(tokens.size() == 2);
    REQUIRE(tokens[0] == "x");
    REQUIRE(tokens[1] == "y");
}
