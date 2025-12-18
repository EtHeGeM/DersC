#include <catch2/catch_all.hpp>

#include "pointers.hpp"

TEST_CASE("sum_raw sums values") {
    int data[] = {1, 2, 3};
    REQUIRE(lesson06::sum_raw(data, 3) == 6);
}

TEST_CASE("zero_out writes zeros") {
    int data[] = {5, 6};
    lesson06::zero_out(data, 2);
    REQUIRE(data[0] == 0);
    REQUIRE(data[1] == 0);
}

TEST_CASE("count_non_null counts pointers") {
    int a = 1;
    int b = 2;
    int *arr[] = {&a, nullptr, &b};
    REQUIRE(lesson06::count_non_null(arr, 3) == 2);
}
