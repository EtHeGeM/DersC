#include <catch2/catch_all.hpp>

#include "stl_examples.hpp"

TEST_CASE("average_score computes mean") {
    REQUIRE(lesson11::average_score({10, 20}) == Approx(15.0));
    REQUIRE(lesson11::average_score({}) == Approx(0.0));
}

TEST_CASE("word_histogram counts words") {
    const auto hist = lesson11::word_histogram({"a", "b", "a"});
    REQUIRE(hist.at("a") == 2);
    REQUIRE(hist.at("b") == 1);
}

TEST_CASE("intersection finds common elements") {
    std::set<int> a = {1, 2, 3};
    std::set<int> b = {2, 3, 4};
    const auto result = lesson11::intersection(a, b);
    REQUIRE(result == std::set<int>({2, 3}));
}

TEST_CASE("filter_prefix selects words") {
    const auto filtered = lesson11::filter_prefix({"apple", "berry", "apricot"}, 'a');
    REQUIRE(filtered.size() == 2);
}
