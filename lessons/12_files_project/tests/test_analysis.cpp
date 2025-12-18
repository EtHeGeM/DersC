#include <catch2/catch_all.hpp>

#include "analysis.hpp"

TEST_CASE("parse_record_line handles valid input") {
    auto rec = lesson12::parse_record_line("2023-01-01T00:00:00Z,s1,12.5");
    REQUIRE(rec);
    REQUIRE(rec->sensor_id == "s1");
    REQUIRE(rec->value == Approx(12.5));
}

TEST_CASE("compute_stats aggregates values") {
    std::vector<lesson12::SensorRecord> records = {
        {"t1", "s1", 1.0},
        {"t2", "s1", 3.0},
        {"t3", "s2", 2.0},
    };
    const auto stats = lesson12::compute_stats(records);
    REQUIRE(stats.at("s1").min == Approx(1.0));
    REQUIRE(stats.at("s1").max == Approx(3.0));
    REQUIRE(stats.at("s1").average() == Approx(2.0));
    REQUIRE(stats.at("s2").count == 1);
}

TEST_CASE("render_csv produces header") {
    std::map<std::string, lesson12::SensorStats> stats;
    stats["s1"].add(2.0);
    const auto csv = lesson12::render_csv(stats);
    REQUIRE(csv.find("sensor_id") != std::string::npos);
}
