#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <algorithm>

TEST_CASE("std::mismatch") {
    std::string s = "wasitacaroracatisaw";

    auto pair = std::mismatch(s.begin(), s.end(), s.rbegin());

    REQUIRE(s.end() == pair.first);
    REQUIRE(s.rend() == pair.second);

    std::string v1 = { 2, 3, 4, 5, 6, 7, 8 };
    std::string v2 = { 2, 3, 4, 4, 6, 7, 8 };

    auto pair2 = std::mismatch(v1.begin(), v1.end(), v2.begin(), v2.end());
    REQUIRE(v1.begin()+3 == pair2.first);
    REQUIRE(v2.begin()+3 == pair2.second);
}

