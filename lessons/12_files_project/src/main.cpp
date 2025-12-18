#include "analysis.hpp"

#include <fstream>
#include <iostream>
#include <optional>
#include <string>
#include <vector>

namespace {
struct Options {
    std::string input;
    std::optional<std::string> output;
    std::string format = "text";
    std::optional<std::string> filter_sensor;
    bool help = false;
};

void print_usage() {
    std::cout << "Sensor Log Analyzer\n"
              << "--input <file> (required)\n"
              << "--output <file> (optional)\n"
              << "--format text|csv (default text)\n"
              << "--filter-sensor <id> (optional)\n"
              << "--help\n";
}

std::optional<Options> parse_args(int argc, char **argv) {
    Options opts;
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--help") {
            opts.help = true;
            return opts;
        } else if (arg == "--input" && i + 1 < argc) {
            opts.input = argv[++i];
        } else if (arg == "--output" && i + 1 < argc) {
            opts.output = std::string(argv[++i]);
        } else if (arg == "--format" && i + 1 < argc) {
            opts.format = argv[++i];
        } else if (arg == "--filter-sensor" && i + 1 < argc) {
            opts.filter_sensor = std::string(argv[++i]);
        } else {
            return std::nullopt;
        }
    }
    if (opts.input.empty()) {
        return std::nullopt;
    }
    if (opts.format != "text" && opts.format != "csv") {
        return std::nullopt;
    }
    return opts;
}
}  // namespace

int main(int argc, char **argv) {
    auto opts = parse_args(argc, argv);
    if (!opts || opts->help) {
        print_usage();
        return opts && opts->help ? 0 : 1;
    }

    try {
        const auto records = lesson12::load_records(opts->input);
        const auto stats = lesson12::compute_stats(records, opts->filter_sensor);
        const std::string output = (opts->format == "csv") ? lesson12::render_csv(stats)
                                                            : lesson12::render_text(stats);

        if (opts->output) {
            std::ofstream out(*opts->output);
            if (!out.is_open()) {
                std::cerr << "Failed to open output file: " << *opts->output << "\n";
                return 1;
            }
            out << output;
        } else {
            std::cout << output;
        }
    } catch (const std::exception &ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 1;
    }

    return 0;
}
