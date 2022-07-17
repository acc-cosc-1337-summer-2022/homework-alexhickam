#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify reutrn double for how many C and G in dna ") {
	
	REQUIRE(get_gc_content("AGCTATAG") ==.375);
	REQUIRE(get_gc_content("CGCTATAG") ==.50);
}

TEST_CASE("Verify string is reversed")
{
	
	REQUIRE(get_reverse_string("AGCTATAG") =="GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") =="GATATCGC");
}

TEST_CASE("Verify string compliment")
{
	
	REQUIRE(get_dna_complement("AAAACCCGGT") =="ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") =="ATTTTCCGGG");
}