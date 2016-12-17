#define CATCH_CONFIG_MAIN
#include "../../../catch/catch.hpp"

#include <algorithm>
#include <vector>

TEST_CASE("std::all_of") {
    std::vector<int> even_values = { 2, 4, 6, 8, 10 };

    auto is_even = [](int value) {
        return value % 2 == 0;
    };
    REQUIRE(std::all_of(even_values.begin(), even_values.end(), is_even));

    std::vector<int> one_odd = { 2, 4, 6, 7, 8, 10 };
    REQUIRE_FALSE(std::all_of(one_odd.begin(), one_odd.end(), is_even));
}

TEST_CASE("std::any_of") {
    std::vector<std::string> values = {
        "hello",
        "this",
        "huh?",
        "some",
        "values",
    };

    auto contains_question_mark = [](std::string s) {
        return s.find("?") != std::string::npos;
    };
    REQUIRE(std::any_of(values.begin(), values.end(), contains_question_mark));

    auto contains_letter_p = [](std::string s) {
        return s.find("p") != std::string::npos;
    };
    REQUIRE_FALSE(std::any_of(values.begin(), values.end(), contains_letter_p));
}

TEST_CASE("std::none_of") {
    std::vector<int> values = { 3, 6, 9, 12 };

    auto divisible_by_ten = [](int value) {
        return value % 10 == 0;
    };
    REQUIRE(std::none_of(values.begin(), values.end(), divisible_by_ten));

    auto divisible_by_four = [](int value) {
        return value % 4 == 0;
    };
    REQUIRE_FALSE(std::none_of(values.begin(), values.end(), divisible_by_four));
}


