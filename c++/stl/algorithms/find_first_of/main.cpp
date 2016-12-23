#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <algorithm>

TEST_CASE("std::find_first_of") {
    std::vector<int> v1 = { 1, 3, 10, 20, 39, 42 };
    std::vector<int> v2 = { 2, 7, 12, 20, 42 };

    auto result = std::find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end());
    REQUIRE(std::distance(v1.begin(), result) == 3);
    REQUIRE(*result == 20);
}

