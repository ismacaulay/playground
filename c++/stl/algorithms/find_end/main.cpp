#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <algorithm>

TEST_CASE("std::find_end") {
    std::vector<int> values = {1, 2, 3, 4, 1, 2, 6, 7, 9 };

    std::vector<int> pattern = {1, 2};
    REQUIRE(std::find_end(values.begin(), values.end(), pattern.begin(), pattern.end()) == values.begin() + 4);
}

