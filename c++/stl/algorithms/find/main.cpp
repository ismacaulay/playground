#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <algorithm>

TEST_CASE("std::find") {
    std::vector<int> values = { 2, 3, 4, 5 };

    REQUIRE(std::find(values.begin(), values.end(), 4) == values.begin() + 2);
    REQUIRE(std::find(values.begin(), values.end(), 7) == std::end(values));
}

TEST_CASE("std::find_if") {
    std::vector<int> values = { 2, 3, 4, 5 };

    auto is_five = [](int v) {
        return v == 5;
    };

    REQUIRE(std::find_if(values.begin(), values.end(), is_five) == values.begin()+3);
}

TEST_CASE("std::find_if_not") {
    std::vector<int> values = {2, 4, 5, 6};

    auto is_even = [](int v) {
        return v % 2 == 0;
    };

    REQUIRE(std::find_if_not(values.begin(), values.end(), is_even) == values.begin()+2);
}



