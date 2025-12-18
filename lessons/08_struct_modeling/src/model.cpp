#include "model.hpp"

#include <algorithm>
#include <cstdlib>

namespace lesson08 {
double Rectangle::area() const {
    const int width = std::abs(bottom_right.x - top_left.x);
    const int height = std::abs(bottom_right.y - top_left.y);
    return static_cast<double>(width) * static_cast<double>(height);
}

bool Rectangle::contains(const Point &p) const {
    const int left = std::min(top_left.x, bottom_right.x);
    const int right = std::max(top_left.x, bottom_right.x);
    const int top = std::min(top_left.y, bottom_right.y);
    const int bottom = std::max(top_left.y, bottom_right.y);
    return p.x >= left && p.x <= right && p.y >= top && p.y <= bottom;
}

Point translate(const Point &p, int dx, int dy) { return Point{p.x + dx, p.y + dy}; }

Rectangle make_normalized(const Point &a, const Point &b) {
    const int left = std::min(a.x, b.x);
    const int right = std::max(a.x, b.x);
    const int top = std::min(a.y, b.y);
    const int bottom = std::max(a.y, b.y);
    return Rectangle{Point{left, top}, Point{right, bottom}};
}
}  // namespace lesson08
