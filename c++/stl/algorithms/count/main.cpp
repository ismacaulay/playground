#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <vector>
#include <algorithm>

TEST_CASE("std::count") {
    std::vector<int> values = { 2, 3, 4, 5, 5, 10, 15, 5, 17, 100, 5, 3 };

    REQUIRE(std::count(values.begin(), values.end(), 5) == 4);
    REQUIRE(std::count(values.begin(), values.end(), 42) == 0);
}

TEST_CASE("std::count_if") {
    std::vector<int> values = { 2, 3, 4, 5, 5, 10, 15, 5, 17, 100, 5, 3 };

    auto greater_than_ten = [](int value) {
        return value > 10;
    };

    REQUIRE(std::count_if(values.begin(), values.end(), greater_than_ten) == 3);
}

