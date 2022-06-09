#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Verify get_sales_tax_amount function") 
{
	REQUIRE (get_sales_tax_amount (10) == 6.75);
  REQUIRE (get_sales_tax_amount (20) == 13.5);
}

TEST_CASE ("Test Get Sales Tax") 
{
  REQUIRE (get_sales_tax_amount (10) == .675);
  REQUIRE (get_sales_tax_amount (20) == 1.35);
}

TEST_CASE ("Test Get Tip Amount") 
{
  REQUIRE (get_tip_amount(20)==1.35);
}

*/