#include "analysis.hpp"

#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdexcept>

namespace lesson12 {
void SensorStats::add(double value) {
    if (count == 0) {
        min = max = value;
    } else {
        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }
    }
    sum += value;
    ++count;
}

double SensorStats::average() const { return count == 0 ? 0.0 : sum / static_cast<double>(count); }

std::optional<SensorRecord> parse_record_line(const std::string &line) {
    std::istringstream ss(line);
    std::string timestamp;
    std::string sensor_id;
    std::string value_str;

    if (!std::getline(ss, timestamp, ',')) {
        return std::nullopt;
    }
    if (!std::getline(ss, sensor_id, ',')) {
        return std::nullopt;
    }
    if (!std::getline(ss, value_str, ',')) {
        return std::nullopt;
    }

    try {
        double value = std::stod(value_str);
        return SensorRecord{timestamp, sensor_id, value};
    } catch (const std::exception &) {
        return std::nullopt;
    }
}

std::vector<SensorRecord> load_records(const std::string &path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open input file: " + path);
    }

    std::vector<SensorRecord> records;
    std::string line;
    while (std::getline(file, line)) {
        if (auto record = parse_record_line(line)) {
            records.push_back(*record);
        }
    }
    return records;
}

std::map<std::string, SensorStats> compute_stats(
    const std::vector<SensorRecord> &records, const std::optional<std::string> &sensor_filter) {
    std::map<std::string, SensorStats> stats;
    for (const auto &record : records) {
        if (sensor_filter && *sensor_filter != record.sensor_id) {
            continue;
        }
        stats[record.sensor_id].add(record.value);
    }
    return stats;
}

std::string render_text(const std::map<std::string, SensorStats> &stats) {
    std::ostringstream out;
    for (const auto &entry : stats) {
        const auto &id = entry.first;
        const auto &s = entry.second;
        out << "Sensor " << id << " -> min: " << s.min << ", max: " << s.max
            << ", avg: " << std::fixed << std::setprecision(2) << s.average()
            << ", count: " << s.count << "\n";
    }
    return out.str();
}

std::string render_csv(const std::map<std::string, SensorStats> &stats) {
    std::ostringstream out;
    out << "sensor_id,min,max,average,count\n";
    for (const auto &entry : stats) {
        const auto &id = entry.first;
        const auto &s = entry.second;
        out << id << ',' << s.min << ',' << s.max << ',' << std::fixed << std::setprecision(2)
            << s.average() << ',' << s.count << "\n";
    }
    return out.str();
}
}  // namespace lesson12
