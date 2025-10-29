#include <catch2/catch_test_macros.hpp>
#include <main.hpp>

TEST_CASE("test1") {
    REQUIRE(main_program() == 0);
}