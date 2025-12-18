#pragma once

#include <cstddef>
#include <memory>
#include <vector>

namespace lesson07 {
class ResourceGuard {
public:
    explicit ResourceGuard(std::size_t size);
    ResourceGuard(const ResourceGuard &) = delete;
    ResourceGuard &operator=(const ResourceGuard &) = delete;
    ResourceGuard(ResourceGuard &&) noexcept = default;
    ResourceGuard &operator=(ResourceGuard &&) noexcept = default;
    ~ResourceGuard() = default;

    void set(std::size_t index, int value);
    int get(std::size_t index) const;
    std::size_t size() const { return size_; }

private:
    std::unique_ptr<int[]> buffer_;
    std::size_t size_{};
};

int sum_buffer(const ResourceGuard &guard);
std::unique_ptr<int> make_int(int value);
int first_or_default(const std::vector<int> &values, int default_value);
}  // namespace lesson07
