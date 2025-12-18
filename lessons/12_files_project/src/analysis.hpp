#pragma once

#include <map>
#include <optional>
#include <string>
#include <vector>

namespace lesson12 {
struct SensorRecord {
    std::string timestamp;
    std::string sensor_id;
    double value{};
};

struct SensorStats {
    double min{};
    double max{};
    double sum{};
    std::size_t count{};

    void add(double value);
    double average() const;
};

std::optional<SensorRecord> parse_record_line(const std::string &line);
std::vector<SensorRecord> load_records(const std::string &path);
std::map<std::string, SensorStats> compute_stats(
    const std::vector<SensorRecord> &records,
    const std::optional<std::string> &sensor_filter = std::nullopt);

std::string render_text(const std::map<std::string, SensorStats> &stats);
std::string render_csv(const std::map<std::string, SensorStats> &stats);
}  // namespace lesson12
