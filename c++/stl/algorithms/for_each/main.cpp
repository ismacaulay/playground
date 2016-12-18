#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <vector>
#include <algorithm>

TEST_CASE("std::for_each") {
    std::vector<int> values = { 1, 2, 3, 4, 5 };

    int last = 0;
    auto add_last = [&last](int& value) {
        int last_value = value;
        value += last;
        last = last_value;
    };
    std::for_each(values.begin(), values.end(), add_last);

    std::vector<int> expected = { 1, 3, 5, 7, 9 };
    REQUIRE(values == expected);
}

