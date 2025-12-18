#pragma once

#include <cstddef>

namespace lesson08 {
struct Point {
    int x{};
    int y{};
};

struct Rectangle {
    Point top_left{};
    Point bottom_right{};
    double area() const;
    bool contains(const Point &p) const;
};

Point translate(const Point &p, int dx, int dy);
Rectangle make_normalized(const Point &a, const Point &b);
}  // namespace lesson08
