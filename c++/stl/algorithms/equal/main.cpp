#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <algorithm>

TEST_CASE("std::equal") {
    std::string s = "wasitacaroracatisaw";

    REQUIRE(std::equal(s.begin(), s.begin()+s.size()/2, s.rbegin()));

    std::string v1 = { 2, 3, 4, 5, 6, 7, 8 };
    std::string v2 = { 2, 3, 4, 4, 6, 7, 8 };
    REQUIRE_FALSE(std::equal(v1.begin(), v1.end(), v2.begin(), v2.end()));
}

