#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "if_else_if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify is overtime function")
{
	REQUIRE(is_overtime(35) == false);
	REQUIRE(is_overtime(40) == false);
	REQUIRE(is_overtime(41) == true);
}

TEST_CASE("Verify is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(4) == true);
}

TEST_CASE("Verify get generation function")
{
	REQUIRE(get_generation(1996) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1966) == "Generation X");
	REQUIRE(get_generation(1947) == "Baby Boomer");
	REQUIRE(get_generation(2025) == "Invalid Year");
}